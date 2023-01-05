#include <stdio.h> 
 
void sort(int array[], int size) { 
int sums[size], digit_sum = 0; 
for (int i = 0; i < size; i++) { // 依序求出总和值 
    sums[i] = 0; 
    digit_sum = array[i]; 
    while (digit_sum > 0) { 
        sums[i] += digit_sum % 10; 
        digit_sum /= 10; 
    } 
} 
for (int i = 0; i < size; i++) { // BUBBLE SORT
    for (int j = 0; j < size; j++) { 
        if (sums[i] > sums[j] || (sums[i] == sums[j] && array[i] > array[j])) { 
            int temp_sum = 0, temp_number = 0; 
            temp_sum = sums[i]; 
            sums[i] = sums[j]; 
            sums[j] = temp_sum; 
            temp_number = array[i]; 
            array[i] = array[j]; 
            array[j] = temp_number; 
        } 
    } 
} 
}  
 
int main() { 
    int count; 
    scanf("%d", &count); 
    int numbers[count]; 
    for (int i = 0; i < count; i++) { 
        scanf("%d", &numbers[i]); 
        } 
    sort(numbers, count); 
    for (int i = count - 1; i >= 0; i--) { 
        if (i == 0) {         
            printf("%d\n", numbers[i]); 
        } 
        else { 
            printf("%d ", numbers[i]); 
            } 
        } 
    return 0; 
} 
 
