#include <stdio.h>

int leftBound(int a[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == target) {
            result = mid;
            right = mid - 1;
        }
        else if (a[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}

int rightBound(int a[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == target) {
            result = mid;
            left = mid + 1;
        }
        else if (a[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int a[] = {1, 2, 2, 2, 3, 4, 5};
    int n = 7;
    int target = 2;

    int first = leftBound(a, n, target);
    int last = rightBound(a, n, target);

    if (first == -1) {
        printf("Not Found\n");
    }
    else {
        printf("First occurrence: %d\n", first);
        printf("Last occurrence: %d\n", last);
    }

    return 0;
}
\
