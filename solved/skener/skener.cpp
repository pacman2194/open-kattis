#include <iostream>
#include <cstdio>

int main()
{
	int h,w,zh,zw;
	scanf("%d %d %d %d ", &h, &w, &zh, &zw);
	char ln[251];

	for(int y=0; y<h; y++)
	{
		int offset=0;
		for(int x=0; x<w; x++)
		{
			char c = getchar();
			for(int zx = 0; zx < zw; zx++)
			{
				ln[offset++]=c; 
			}
		}
		scanf(" ");
		ln[offset] = 0;
		
		for(int zy=0; zy<zh; zy++)
			puts(ln);
	}
}
