#include <iostream>

using namespace std;

const int WIDTH = 60;
const int HEIGHT = 40;


const int bordo = 30;
const int raggio = 18;


char mat[HEIGHT][WIDTH];

void init_mat()
{
	for (int y=0; y<HEIGHT; y++)
		for (int x=0; x<WIDTH; x++)
			mat[y][x] = 0;
			
		
	for (int y=0; y<HEIGHT; y++)
		for (int x=0; x<WIDTH; x++)
			{
				int px = -1*(x - WIDTH/2);
				int py = y - HEIGHT/2;
				
				if (py == 0)
					mat[y][x] = '=';
				
				if (px == 0)
					mat[y][x] = '|';
					
				int a = px*px + py*py;
				if (a < (raggio*raggio) && a >= ((raggio*raggio)-bordo))
					mat[y][x] = 1;
			}
}

void show_mat()
{
	for (int y=0; y<HEIGHT; y++)
	{
		for (int x=0; x<WIDTH; x++)
			cout << mat[y][x];
		cout << endl;
	}
}

void divi_cerchio(const int n)
{
	switch (n){
		case 0:
			return;
			break;
		case 1:
			mat[HEIGHT/2 - raggio][WIDTH/2] = 'O';
			break;
		case 2:
			mat[HEIGHT/2 - raggio][WIDTH/2] = 'O';
			mat[HEIGHT/2 + raggio][WIDTH/2] = 'O';
			break;
		case 3:
			mat[HEIGHT/2 - raggio][WIDTH/2] = 'O';
			mat[HEIGHT/2 + raggio*2/3][WIDTH/2+raggio*2/3] = 'O';
			mat[HEIGHT/2 + raggio*2/3][WIDTH/2-raggio*2/3] = 'O';
			break;
		case 4: 
			mat[HEIGHT/2 - raggio*2/3][WIDTH/2+raggio*2/3] = 'O';
			mat[HEIGHT/2 - raggio*2/3][WIDTH/2-raggio*2/3] = 'O';
			mat[HEIGHT/2 + raggio*2/3][WIDTH/2+raggio*2/3] = 'O';
			mat[HEIGHT/2 + raggio*2/3][WIDTH/2-raggio*2/3] = 'O';
			break;
	}
}

int main(int argc, char** argv)
{
	
	init_mat();
	divi_cerchio(4);
	show_mat();
	
	return 0;
	
}
