#include <stdio.h>
#include <conio.h>

void HanoiTower(int, char, char, char);
int main() {

    int n;
    printf("Enter the number of disks (n):  \n");
    scanf("%d", &n);

    HanoiTower(n, 'A', 'B', 'C');
    getch();
    return 0;
}

void HanoiTower(int n, char Source, char Aux, char Dest) {

    if (n == 1) {
        printf("We´ll move %c to tower %c \n", Source, Dest);

    } else {

        HanoiTower(n - 1, Source, Dest, Aux);

        HanoiTower(1, Source, Aux, Dest);

        HanoiTower(n - 1, Aux, Source, Dest);

    }
}
