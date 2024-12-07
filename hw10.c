#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char country[50];
    int population;
} City;

int main(void) {
    City cities[3];
    memset(cities, 0, sizeof(cities));

    printf("Input three cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name> ");
        if (fgets(cities[i].name, sizeof(cities[i].name), stdin) == NULL) {
            fprintf(stderr, "Input error\n");
            return 1;
        }
        size_t len = strlen(cities[i].name);
        if (len > 0 && cities[i].name[len - 1] == '\n') {
            cities[i].name[len - 1] = '\0';
        }

        printf("Country> ");
        if (fgets(cities[i].country, sizeof(cities[i].country), stdin) == NULL) {
            fprintf(stderr, "Input error\n");
            return 1;
        }
        len = strlen(cities[i].country);
        if (len > 0 && cities[i].country[len - 1] == '\n') {
            cities[i].country[len - 1] = '\0';
        }

        printf("Population > ");
        if (scanf("%d", &cities[i].population) != 1) {
            fprintf(stderr, "Invalid population input\n");
            return 1;
        }

        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("Printing the three cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
