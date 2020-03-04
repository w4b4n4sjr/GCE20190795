#include <stdio.h>
#define N 4
int left=0, top=0, right=N-1, bottom=N-1, x=1;
void set_x(int);
int get_x();
void set_top(int);
int get_top();
void set_bottom(int);
int get_bottom();
void set_left(int);
int get_left();
void set_right(int);
int get_right();
void initializeArray(int arr[N][N]);
void displayArray(int arr1[N][N]);
void fillRowForward(int a[N][N], int , int , int , int );
void fillcolume_dow(int a[N][N], int top , int bottom, int right, int x);
void fillrow_back(int a[N][N], int bottom , int left, int right, int x);
void fillcolume_up(int a[N][N], int top , int bottom, int left, int x);
int main(int argc, char *argv[])
{
	int matr[N][N];
	initializeArray(matr);
 while(x<=N*N)
  {
	fillRowForward(matr, top, left, right, x);
    //displayArray(matr);
		x = get_x();
		top = get_top();
	fillcolume_dow(matr, top , bottom, right, get_x());
    //displayArray(matr);
		x = get_x();
		right = get_right();
	fillrow_back(matr, bottom , left, right, x);
    //displayArray(matr);
	    x = get_x();
		bottom = get_bottom();
	fillcolume_up(matr,  top ,  bottom,  left, x);
  }
	displayArray(matr);
    return 0;
}

void initializeArray(int arr[N][N])
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j ++)
		{
			arr[i][j] = 0;
		}
	}
}

void displayArray(int arr1[N][N])
{
	int k, l;
	for (k  = 0; k < N; k++)
	{
		for (l = 0; l < N; l++)
		{
			printf("%d   ", arr1[k][l]);
		}
		printf("\n\n");
	}
}
void fillRowForward(int a[N][N], int top, int leftt, int right, int x)
{
	int counter;
	for(counter = left; counter <= right; counter ++)
	{
		a[top][counter] = x;
		x = x + 1;
	}
	set_x(x);
	set_top(top);
}
void fillcolume_dow(int a[N][N], int top , int bottom, int right, int x)
{
	int i;
	for(i=top; i<=bottom; i++)
	{
		a[i][right]= x;
		x = x+1;
	}
	set_right(right);
	set_x(x);
}
void fillrow_back(int a[N][N], int bottom , int left, int right, int x)
{
	int i;
	for(i=right; i>=left; i--)
	{
		a[bottom][i]= x;
		x = x+1;
	}
    set_bottom(bottom);
	set_x(x);
}
void fillcolume_up(int a[N][N], int top , int bottom, int left, int x)
{
	int i;
	for(i=bottom; i>=top; i--)
	{
		a[i][left]= x;
		x = x+1;
	}
 	set_left(left);
	set_x(x);
}
void set_x(int y)
{
 x = y;
}
int get_x(void)
{
	return x;
}
void set_top(int y)
{
 top = y+1;
}
int get_top(void)
{
	return top;
}
void set_left(int y)
{
	left = y+1;
}
int get_left(void)
{
	return left;
}
void set_bottom(int y)
{
 bottom = y-1;
}
int get_bottom(void)
{
	return bottom;
}
void set_right(int y)
{
 right = y-1;
}
int get_right(void)
{
	return right;
}
