#include<stdio.h>
int main()
{
        int A[10][10],B[10][3],C[10][3],i,j,r,c,k=1,m=0,x,y,z;
        printf("Enter the row-size and column-size of the matrix A:\t");
        scanf("%d%d",&r,&c);
        printf("\nEnter the elements for the matrix :\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        scanf("%d",&A[i][j]);   //reading the matrix elements
                }
        }
        printf("\nThe entered Matrix :\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",A[i][j]); //displaying the matrix elements
                }
                printf("\n");
        }
        /* Sparse Matrix Triplet Finding Logic*/
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        if(A[i][j]!=0)  //getting the non-zero value
                        {
                                B[k][0]=i;              //row number
                                B[k][1]=j;              //column number 
                                B[k][2]=A[i][j];//Non-zero value
                                k++;
                                m++;
                        }
                }
        }
        /*Sparse Matrix Triplets*/
        B[0][0]=r;              //row size
        B[0][1]=c;              //column size
        B[0][2]=m;              //total number of non-zero value
        /*Displaying the Sparse Matrix in Triplet Form */
        printf("\nThe Sparse Matrix triplet Representation is:\n");
        for(i=0;i<k;i++)
        {
                for(j=0;j<3;j++)
                {
                        printf("%d\t",B[i][j]);
                }
                printf("\n");
        }
        /*Transpose of the Sparse Matrix Logic*/
        x=B[0][0];      //getting row value
        y=B[0][1];      //getting column value
        z=B[0][2];      //getting non-zero elements
 
        C[0][0]=y;      //row will be column    //Transposed matrix
        C[0][1]=x;      //column will be row
        C[0][2]=z;      // non-zero elements
        k=1;
        if(z>0)
        {
                for(j=0;j<y;j++)
                {
                        for(i=1;i<=z;i++)
                        {
                                if(B[i][1]==j)
                                {
                                        C[k][0]=B[i][1];
                                        C[k][1]=B[i][0];
                                        C[k][2]=B[i][2];
                                        k++;
                                }
                        }
                }
        }
        /*Displaying the Transposed Sparse Matrix in Triplet Form */
        printf("\nThe Transposed Sparse Matrix in triplet Representation is:\n");
        for(i=0;i<k;i++)
        {
                for(j=0;j<3;j++)
                {
                        printf("%d\t",C[i][j]); //Displaying the matrix elements
                }
                printf("\n");
        }
return 0;
}
