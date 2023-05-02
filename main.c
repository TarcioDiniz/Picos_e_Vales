#include <stdio.h>

int main() {
    int num_landscapes, current_landscape, previous_landscape, is_pattern = 1, is_peak;

    scanf("%d", &num_landscapes);

    if (num_landscapes == 1) {
        scanf("%d", &current_landscape);
        printf("%d\n", is_pattern);
    }
    else if (num_landscapes == 2) {
        scanf("%d", &previous_landscape);
        scanf("%d", &current_landscape);
        printf("%d\n", current_landscape != previous_landscape);
    }
    else {
        scanf("%d", &previous_landscape);
        scanf("%d", &current_landscape);
        num_landscapes -= 2;
        is_peak = current_landscape > previous_landscape;
        do {
            previous_landscape = current_landscape;
            scanf("%d", &current_landscape);
            num_landscapes--;
            if (is_pattern) {
                if (is_peak) {
                    is_pattern = current_landscape < previous_landscape;
                    is_peak = 0;
                } else {
                    is_pattern = current_landscape > previous_landscape;
                    is_peak = 1;
                }
            }
        } while (num_landscapes > 0);
        printf("%d\n", is_pattern);
    }
    return 0;
}
