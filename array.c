#include <stdio.h> 
#define MAX 20 
int n; 
void InsertB(int arr[], int item) 
{ 
if (n == MAX) 
printf("Array is full\n"); 
else 
{ 
n = n + 1; 
int j = n - 1; 
for (int i = j; i >= 0; i--) 
{ 
arr[i + 1] = arr[i]; 
} 
arr[0] = item; 
} 
} 
void InsertS(int arr[], int pos, int item) { 
if (n == MAX)
printf("Array is full\n"); 
else 
{ 
int j = n - 1; 
for (int i = j; i >= pos - 1; i--) { 
arr[i + 1] = arr[i]; 
} 
arr[pos] = item; 
} 
} 
void Deletelast(int arr[]) 
{ 
if (n == 0) 
printf("Array is empty\n"); else 
{ 
n = n - 1; 
} 
} 
void Deleteindex(int arr[], int pos) { 
if (pos < 0 || pos > n) 
printf("Invalid index\n"); 
else 
{ 
int j = n - 1; 
for (int i = pos - 1; i < j; i++) { 
arr[i] = arr[i + 1]; 
} 
n--;
} 
} 
void Traverse(int arr[]) 
{ 
for (int i = 0; i < n; i++) 
{ 
printf("%d", arr[i]); 
} 
} 
int main() 
{ 
int arr[MAX], item = 0, pos = 0; 
printf("Enter the size of array\n"); 
scanf("%d", &n); 
printf("Enter the elements of array\n"); for (int i = 0; i < n; i++) 
{ 
scanf("%d", &arr[i]); 
} 
int x; 
printf("choose the operation that you want to  perform on array\n"); 
printf ("1.Insert an element at the beginning\n"
         "2.Insert an element before specific  position\n"
        "3 .Delete the last element\n 4.Delete a  specific element\n5.Traverse\n"); 
scanf("%d", &x); 
switch (x) 
{ 
case 1: 
printf("Enter the item to be inserted\n"); scanf("%d", &item);
InsertB(arr, item); 
Traverse(arr); 
break; 
case 2: 
printf("Enter the item to be inserted\n"); scanf("%d", &item); 
printf("Enter the position at which item to be  inserted\n"); 
scanf("%d", &pos); 
InsertS(arr, pos, item); 
Traverse(arr); 
break; 
case 3: 
Deletelast(arr); 
Traverse(arr); 
break; 
case 4: 
printf("Enter the position at which item to be  deleted\n"); 
scanf("%d", &pos); 
Deleteindex(arr, pos); 
Traverse(arr); 
break; 
case 5: 
Traverse(arr); 
break; 
} 

return 0;

}
