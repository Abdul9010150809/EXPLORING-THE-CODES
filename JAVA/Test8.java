import java.util.*;
class Test8 {
	public static void main(String args[]){
	Scanner s=new Scanner(System.in);
	int row1,col1,col2,row2;
	System.out.println("Enter no.of rows in first matrix :");
	row1=s.nextInt();
	System.out.println("Enter no.of cols in first matrix :");
	col1=s.nextInt();
	System.out.println("Enter no.of rows in second matrix :");
	row2=s.nextInt();
	System.out.println("Enter no.of cols in second matrix :");
	col2=s.nextInt();
	int a[][]=new int[row1][col1];
	int b[][]=new int[row2][col2];
	System.out.println("Enter first matrix elements:");
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			a[i][j]=s.nextInt();
					}
				}
	System.out.println("Enter second matrix elements:");
	for(int i=0;i<row2;i++){
		for(int j=0;j<col2;j++){
			b[i][j]=s.nextInt();
					}
				}			
	System.out.println("The first matrix :");
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			System.out.printf("%d ",a[i][j]);
					}
			System.out.println(" ");
				}
	System.out.println("The second matrix :");
	for(int i=0;i<row2;i++){
		for(int j=0;j<col2;j++){
			System.out.printf("%d ",b[i][j]);
					}
			System.out.println(" ");
				}
	int c[][]=new int[row1+row2][col1+col2];
	int d[][]=new int[row1+row2][col1+col2];
	System.out.println("The sum of marix is :");
	if(row1==col1){
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			c[i][j]=a[i][j]+b[i][j];
					}
				}
	for(int i=0;i<row2;i++){
		for(int j=0;j<col2;j++){
			System.out.printf("%d ",c[i][j]);
					}
			System.out.println(" ");
				}
				}
	else{
	System.out.println("The sum of marix is not posssible");
	}
	
	}
	}
	

