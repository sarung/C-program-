#include  <stdio.h>
main()
{
  int  x[10][10] , nr , nc , r , c , flag ;



  printf("Enter the number of rows and columns: ") ;
  scanf("%d %d", &nr , &nc) ;

  if(nr==nc)  		/* checking for square matrix */
  {
    printf("Enter elements of the matrix: \n") ;
    for(r=0 ; r<nr ; r++)
      for(c=0 ; c<nc ; c++)
        scanf("%d" , &x[r][c]) ;

    flag=1 ;
    for(r=0 ; r<nr ; r++)
      for(c=0 ; c<nc ; c++)
        if(r==c) /* true for diagonal elements */
        {
	       if(x[r][c]==0)
	         flag=0;
        }
        else
        {
	       if(x[r][c]!=0)
	         flag=0;
        }

    if(flag==1)
      printf("The matrix is diagonal") ;
    else
      printf("The matrix is not diagonal") ; 
  }
  else
    printf("The matrix is not a sqaure matrix") ;

 
}



