 #inclide <stdio.h>
#inclide <math.h>
void main(void)
{
	int i;
	float g, k, z;
	float S, step;
	S=0.0; step=0.0;
	g=3; k=1; z=1;
	for ( i=1;i<=5; i++ )
	{
S=S+z*g/k;
z=-z;
g=g+1; k=k+3;
}
printf ( “s=%.3f”, S );
getch ();
}
