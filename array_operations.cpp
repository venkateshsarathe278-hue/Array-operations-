#include <iostream>
using namespace std;
int N, N2, n;
int arr[100];
int arr2[100];
void create()
{
	cout << "Enter the size of the array : ";
	cin >> N;
	if (N <= 0)
	{
		cout << "Invalid size " << endl;
	}
	else if (N > 100)
	{
		cout << "Invalid size " << endl;
	}
	else
	{
		for (int i = 0; i <= N - 1; i++)
		{
			cout << "Enter " << i << " element of an array : ";
			cin >> arr[i];
		}
		cout << "After creation" << endl;
	}
}
void traverse()
{
	if (N <= 0 || N > 100)
	{
		cout << "Array is empty " << endl;
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			cout << i << " element of an array : " << arr[i] << endl;
		}
	}
}
//INSERTION
void insert()
{
	int pos;
	cout << "Enter position ( index) to insert a new element : ";
	cin >> pos;
	if (pos > N - 1)
	{
		cout << "Enter element to insert : ";
		cin >> arr[pos];
	}
	else if (pos < 0)
	{
		cout << "Invalid position" << endl;
	}
	else
	{
		//for(int i = N - 1; i >= pos; i --){
		int i = N - 1;
		while (i >= pos)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		cout << "Enter element to insert at  " << pos << " : ";
		cin >> arr[pos];
		N++;
	}
}
void deletion()
{ //deletion
	int item;
	cout << "Enter item to delete : ";
	cin >> item;
	int i = 0;
	int j;
	while (arr[i] != item)
	{
		i++;
	}

	j = i;
	while (j <= N - 1)
	{
		arr[j] = arr[j + 1];
		j++;
	}
	N--;
}
//SEARCHING
void search()
{
	int i, item;
	bool found = false;
	cout << "Enter the value to search : ";
	cin >> item;
	i = 0;
	while (i < N)
	{
		if (arr[i] == item)
		{
			cout << "Item is found " << endl;
			found = true;
			break;
		}
		i++;
	}
	if (found == false)
	{
		cout << "Item is not found" << endl;
	}
}

//SORTING
void sorting()
{
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "After sorting " << endl;
}
// MERGING
void merg()
{
	cout << "Enter the size for 2nd array : ";
	cin >> N2;
	for (int i = 0; i < N2; i++)
	{ //ARRAY2
		cout << "Enter the element to insert at index " << i << " : ";
		cin >> arr2[i];
	}
	//CRAETE 3RD ARRAY
	int arr3[N + N2];
	for (int i = 0; i < N; i++)
	{ //copy element from 1st array
		arr3[i] = arr[i];
	}
	for (int i = 0; i < N2; i++)
	{ //copy elements from 2nd array
		arr3[N + i] = arr2[i];
	}
	for (int i = 0; i < N + N2; i++)
	{
		cout << "Element at index " << i << " : " << arr3[i] << endl;
	}
}
int main()
{
	create();
	traverse();
	insert();
	traverse();
	deletion();
	traverse();
	search();
	sorting();
	traverse();
	merg();
}