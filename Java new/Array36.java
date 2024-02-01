import java.util.Scanner;
class Array36 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows and columns of the matrix: ");
        int rows = sc.nextInt();
        int columns = sc.nextInt();

        int[][] matrix = new int[rows][columns];

        System.out.println("Enter the elements of the matrix:");

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        int[][] transpose = findTranspose(matrix, rows, columns);

        System.out.println("Transpose of the matrix:");

        for (int i = 0; i < columns; i++) {
            for (int j = 0; j < rows; j++) {
                System.out.print(transpose[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }

    static int[][] findTranspose(int[][] matrix, int rows, int columns) {
        int[][] transpose = new int[columns][rows];
        return transpose;

    }
}