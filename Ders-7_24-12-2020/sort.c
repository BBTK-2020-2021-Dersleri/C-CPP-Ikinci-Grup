#include "stdlib.h"
#include "stdio.h"
#define DIM 5
#define CDIM 5

void printArray(int arr[], int);
void fillArray(int arr[], int);
void basicSort(int arr[], int);
void bubbleSort(int arr[], int);
void shuffle(int arr[], int, int);
void input(char commands[], int);
void startProgram(int arr[], char commands[], int, int);

void main() {

	int arr[DIM];
	fillArray(arr, DIM);
	printf("Array------->");
	printArray(arr, DIM);
	char command[CDIM];
	input(command, CDIM);
	startProgram(arr, command, DIM, CDIM);

	system("pause");
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void fillArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;// arr[4] = { 0,1,2,3 }
	}
}

void basicSort(int arr[], int n) { // { 0,1,2,3,4 }
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void bubbleSort(int arr[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void shuffle(int arr[], int n, int rate) {
	int a, b, temp;
	for (int i = 0; i < rate; i++)
	{
		a = rand() % n;
		b = rand() % n;
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
}

void input(char commands[], int c) {
	printf("Karakterleri giriniz: ");
	for (int i = 0; i < c; i++)
	{
		scanf_s(" %c", &commands[i]);
		if (commands[i] == 'x')
			break;
	}
}

void startProgram(int arr[], char commands[], int n, int c) {

	for (int i = 0; i < c; i++)
	{
		if (commands[i] == 's') {
			printf("Shuffle----->");
			shuffle(arr, n, n * 2);
			printArray(arr, n);
		}
		else if (commands[i] == 'b') {
			printf("Bubble Sort->");
			bubbleSort(arr, n);
			printArray(arr, n);
		}
		else if (commands[i] == 'e') {
			printf("Basic Sort-->");
			basicSort(arr, n);
			printArray(arr, n);
		}
		else
			break;
	}
}