/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int main()
{
        int **map;
        map = malloc(sizeof(map) * 3);
        map[0] = malloc(sizeof(*map) * 1);
        map[1] = malloc(sizeof(*map) * 2);
        map[2] = malloc(sizeof(*map) * 3);
        map[3] = malloc(sizeof(*map) * 4);

        map[0][0] = 0;
        map[1][0] = 7;
        map[1][1] = 4;
        map[2][0] = 2;
        map[2][1] = 3;
        map[2][2] = 6;
        map[3][0] = 8;
        map[3][1] = 5;
        map[3][2] = 9;
        map[3][3] = 3;

        pyramid_path(4, map);
}
