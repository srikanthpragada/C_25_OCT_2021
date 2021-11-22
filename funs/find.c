
// Returns position where given number is found, -1 if not found
int find(int a[10], int v)
{
 int i;

    for (i = 0; i < 10; i ++)
    {
        if(a[i] == v)
           return i;  // position
    }

    return -1; // not found
}

void main()
{
  int arr[] = {1,2,3,4,5,5,5,6,6,10};

      printf("%d ", find(arr,14));
}
