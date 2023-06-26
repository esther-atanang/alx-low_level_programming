#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
/**
 * _printf - prints to the standard output
 * @format: The format specifier
 * Return - Nothing
 */
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    char buffer[1024];
    int count = 0;
    int buffer_count = 0;
    while (*format != '\0')
    {
        if (*format != '%')
        {
            buffer[buffer_count++] = *format++;
            count++;
            if (buffer_count == sizeof(buffer) - 1)
            {
                write(STDOUT_FILENO, buffer, buffer_count);
                buffer_count = 0;
            }
        }
        else
        {
            format++;
            int plus_flag = 0;
            int space_flag = 0;
            int hash_flag = 0;
            int zero_flag = 0;
            int minus_flag = 0;
            while (*format == '+' || *format == ' ' || *format == '#' || *format == '0' || *format == '-')
            {
                if (*format == '+')
                    plus_flag = 1;
                else if (*format == ' ')
                    space_flag = 1;
                else if (*format == '#')
                    hash_flag = 1;
                else if (*format == '0')
                    zero_flag = 1;
                else if (*format == '-')
                    minus_flag = 1;

                format++;
            }

            int width = 0;

            if (*format >= '0' && *format <= '9')
            {
                width = *format - '0';
                format++;

                while (*format >= '0' && *format <= '9')
                {
                    width = width * 10 + (*format - '0');
                    format++;
                }
            }

            int precision = -1;

            if (*format == '.')
            {
                format++;

                if (*format >= '0' && *format <= '9')
                {
                    precision = *format - '0';
                    format++;

                    while (*format >= '0' && *format <= '9')
                    {
                        precision = precision * 10 + (*format - '0');
                        format++;
                    }
                }
                else if (*format == '*')
                {
                    precision = va_arg(args, int);
                    format++;
                }
            }

            switch (*format)
            {
            case 'c':
                buffer[buffer_count++] = (char)va_arg(args, int);
                count++;
                if (buffer_count == sizeof(buffer) - 1)
                {
                    write(STDOUT_FILENO, buffer, buffer_count);
                    buffer_count = 0;
                }
                format++;
                break;
            case 's':
            {
                const char *str = va_arg(args, const char *);
                size_t str_length = strlen(str);

                if (precision >= 0 && precision < str_length)
                    str_length = precision;
                if (minus_flag)
                    width = -width;

                for (size_t i = 0; i < str_length; i++)
                {
                    buffer[buffer_count++] = str[i];
                    count++;
                    if (buffer_count == sizeof(buffer) - 1)
                    {
                        write(STDOUT_FILENO, buffer, buffer_count);
                        buffer_count = 0;
                    }
                }

                while (str_length < (size_t)(-width))
                {
                    buffer[buffer_count++] = ' ';
                    count++;
                    if (buffer_count == sizeof(buffer) - 1)
                    {
                        write(STDOUT_FILENO, buffer, buffer_count);
                        buffer_count = 0;
                    }
                    str_length++;
                }

                format++;
                break;
            }
            case '%':
                buffer[buffer_count++] = '%';
                count++;
                if (buffer_count == sizeof(buffer) - 1)
                {
                    write(STDOUT_FILENO, buffer, buffer_count);
                    buffer_count = 0;
                }
                format++;
                break;
            case 'd':
            case 'i':
            {
                int num = va_arg(args, int);
                int num_length = snprintf(&buffer[buffer_count], sizeof(buffer) - buffer_count, "%+*d", width, num);
                buffer_count += num_length;
                count += num_length;
                if (buffer_count >= sizeof(buffer) - 1)
                {
                    write(STDOUT_FILENO, buffer, buffer_count);
                    buffer_count = 0;
                }
                format++;
                break;
            }
            case 'u':
            {
                unsigned int num = va_arg(args, unsigned int);
                int num_length = snprintf(&buffer[buffer_count], sizeof(buffer) - buffer_count, "%*u", width, num);
                buffer_count += num_length;
                count += num_length;
                if (buffer_count >= sizeof(buffer) - 1)
                {
                    write(STDOUT_FILENO, buffer, buffer_count);
                    buffer_count = 0;
                }
                format++;
                break;
            }
            case 'o':
            {
                unsigned int num = va_arg(args, unsigned int);
                int num_length = snprintf(&buffer[buffer_count], sizeof(buffer) - buffer_count, "%#*o", width, num);
                buffer_count += num_length;
                count += num_length;
                if (buffer_count >= sizeof(buffer) - 1)
                {
                    write(STDOUT_FILENO, buffer, buffer_count);
                    buffer_count = 0;
                }
                format++;
                break;
            }
            case 'x':
            {
                unsigned int num = va_arg(args, unsigned int);
                int num_length = snprintf(&buffer[buffer_count], sizeof(buffer) - buffer_count, "%#*x", width, num);
                buffer_count += num_length;
                count += num_length;
                if (buffer_count >= sizeof(buffer) - 1)
                {
                    write(STDOUT_FILENO, buffer, buffer_count);
                    buffer_count = 0;
                }
                format++;
                break;
            }
            case 'X':
            {
                unsigned int num = va_arg(args, unsigned int);
                int num_length = snprintf(&buffer[buffer_count], sizeof(buffer) - buffer_count, "%#*X", width, num);
                buffer_count += num_length;
                count += num_length;
                if (buffer_count >= sizeof(buffer) - 1)
                {
                    write(STDOUT_FILENO, buffer, buffer_count);
                    buffer_count = 0;
                }
                format++;
                break;
            }
            case 'r':
            {
                char *str = va_arg(args, char *);

                size_t str_length = strlen(str);

                for (size_t i = 0, j = str_length - 1; i < j; i++, j--)
                {
                    char temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }

                for (size_t i = 0; i < str_length; i++)
                {
                    buffer[buffer_count++] = str[i];
                    count++;
                    if (buffer_count == sizeof(buffer) - 1)
                    {
                        write(STDOUT_FILENO, buffer, buffer_count);
                        buffer_count = 0;
                    }
                }

                format++;
                break;
            }
            default:
                format++;
                break;
            }
        }
    }
    if (buffer_count > 0)
        write(STDOUT_FILENO, buffer, buffer_count);

    va_end(args);
    return count;
}
