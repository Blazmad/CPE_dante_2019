/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** returns 1 if the string passed as parameter only contains lowercase, 0 if not
*/

int my_str_islower(char const *str)
{
    int i = 0;
    int good = 0;

    while (str[i] != 0) {
        if (str[i] > 97 && str[i] < 122)
            good++;
        else
            return (0);
        i++;
    }
    if (good != 0)
        return (1);
    return (1);
}