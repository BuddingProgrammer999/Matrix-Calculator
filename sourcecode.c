#include<stdio.h>
#include<conio.h>
int option(); // DECLARED FUNCTION FOR ENTRY OF OPTIONS
int addition() { // DEFINED FUNCTION FOR ADDITION OF TWO MATRICES
    int first[100][100], second[100][100], sum[100][100], i, j, rows, columns, choice;
    printf("\nYOU HAVE CHOSEN TO ADD TWO MATRICES!\n");
    printf("PRESS ENTER TO CONTINUE!\n\n");
    getch();
    printf("\nENTER NUMBER OF ROWS = ");
    scanf("%d", &rows);
    printf("ENTER NUMBER OF COLUMNS = ");
    scanf("%d", &columns);
    printf("\nENTER THE ELEMENTS OF THE FIRST MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\nENTER THE ELEMENTS OF THE SECOND MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER B%d%d = ", i+1, j+1);
            scanf("%d", &second[i][j]);
        }
    }
    printf("\nTHE FIRST MATRIX IS:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", first[i][j]);
        }
        printf("\n\n");
    } 
    printf("\nTHE SECOND MATRIX IS:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t",second[i][j]);
        }
        printf("\n\n");
    }
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            sum[i][j] = first[i][j] + second[i][j]; // LOGIC FOR ADDING TWO MATRICES
        }
    }
    printf("\nTHE RESULTANT MATRIX IS:\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n\n");
    }
    printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPTS THE USER WHETHER TO USE AGAIN OR NOT
    printf("ENTER ANY NUMBER TO EXIT\n");
    scanf("%d", &choice);
    if (choice == 1) {
       option(); // FUNCTION CALL FOR CHOOSING OUR DESIRED OPERATION
    }
    else {
       printf("\nTHANK YOU :)");
    }
    return 0;
}
int subtraction() { // DEFINED FUNCTION FOR SUBTRACTION OF TWO MATRCIES
    int first[100][100], second[100][100], difference[100][100], i, j, rows, columns, choice1;
    printf("\nYOU HAVE CHOSEN TO SUBTRACT TWO MATRICES!\n");
    printf("PRESS ENTER TO CONTINUE!\n\n");
    getch();
    printf("\nENTER NUMBER OF ROWS = ");
    scanf("%d", &rows);
    printf("ENTER NUMBER OF COLUMNS = ");
    scanf("%d", &columns);
    printf("\nENTER THE ELEMENTS OF THE FIRST MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\nENTER THE ELEMENTS OF THE SECOND MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER B%d%d = ", i+1, j+1);
            scanf("%d", &second[i][j]);
        }
    }
    printf("\nTHE FIRST MATRIX IS:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", first[i][j]);
        }
        printf("\n\n");
    } 
    printf("\nTHE SECOND MATRIX IS:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t",second[i][j]);
        }
        printf("\n\n");
    }
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            difference[i][j] = first[i][j] - second[i][j]; // LOGIC FOR SUBTRACTING TWO MATRICES
        }
    }
    printf("\nTHE RESULTANT MATRIX IS:\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", difference[i][j]);
        }
        printf("\n\n");
    }
    printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPTS THE USER WHETHER TO USE AGAIN OR NOT
    printf("ENTER ANY NUMBER TO EXIT\n");
    scanf("%d", &choice1);
    if (choice1 == 1) {
       option(); // FUNCTION CALL FOR CHOOSING OUR DESIRED OPERATION
    }
    else {
       printf("\nTHANK YOU :)");
    }
    return 0;
}
int multiplication() { // DEFINED FUNCTION FOR MULTIPLICATION OF TWO MATRICES
    int first[100][100], second[100][100], product[100][100], i, j, k, rows, columns, choice2;
    printf("\nYOU HAVE CHOSEN TO MULTIPLY TWO MATRICES!\n");
    printf("PRESS ENTER TO CONTINUE!\n\n");
    getch();
    printf("\nENTER NUMBER OF ROWS = ");
    scanf("%d", &rows);
    printf("ENTER NUMBER OF COLUMNS = ");
    scanf("%d", &columns);
    printf("\nENTER THE ELEMENTS OF THE FIRST MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\nENTER THE ELEMENTS OF THE SECOND MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER B%d%d = ", i+1, j+1);
            scanf("%d", &second[i][j]);
        }
    }
    printf("\nTHE FIRST MATRIX IS:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", first[i][j]);
        }
        printf("\n\n");
    } 
    printf("\nTHE SECOND MATRIX IS:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t",second[i][j]);
        }
        printf("\n\n");
    }   
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            product[i][j] = 0;
            for (k=0; k<columns; k++) {
                product[i][j] = product[i][j] + (first[i][k] * second[k][j]); // LOGIC USED FOR MULTIPLYING TWO MATRICES
            }
        }
    }
     printf("\nTHE RESULTANT MATRIX IS:\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n\n");
    }
    printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPTS THE USER WHETHER TO USE AGAIN OR NOT
    printf("ENTER ANY NUMBER TO EXIT\n");
    scanf("%d", &choice2);
    if (choice2 == 1) {
       option(); // FUNCTION CALL FOR CHOOSING OUR DESIRED OPERATION
    }
    else {
       printf("\nTHANK YOU :)");
    }
    return 0;
}
int determinant() { // DEFINED FUNCTION TO FIND THE DETERMINANT OF A MATRIX
    int a[100][100], i, j, rows, columns, determinant, num1, num2, num3, num4, det1, det2, det3, det4, choice3;
    printf("\nYOU HAVE CHOSEN TO FIND THE DETERMINANT OF A MATRIX!\n");
    printf("NOTE: YOU CAN CHOOSE ONLY 2X2, 3X3, AND 4X4 MATRICES FOR FINDING THE DETERMINANT!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n\n");
    getch();
    do {
    printf("\nENTER NUMBER OF ROWS = ");
    scanf("%d", &rows);
    printf("ENTER NUMBER OF COLUMNS = ");
    scanf("%d", &columns);
    if (rows == 4 && columns == 4) {
        printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    // LOGIC USED FOR FINDING DETERMINANT OF A 4X4 MATRIX
        num1 = a[1][1] * (a[3][3] * a[2][2] - a[3][2] * a[2][3]) - a[1][2] * (a[3][3] * a[2][1] - a[3][1] * a[2][3]) + a[1][3] * (a[2][1] * a[3][2] - a[3][1] * a[2][2]);
        num2 = a[1][0] * (a[2][2] * a[3][3] - a[3][2] * a[2][3]) - a[1][2] * (a[2][0] * a[3][3] - a[3][0] * a[2][3]) + a[1][3] * (a[2][0] * a[3][2] - a[3][0] * a[2][2]);
        num3 = a[1][0] * (a[2][1] * a[3][3] - a[3][1] * a[2][3]) - a[1][1] * (a[2][0] * a[3][3] - a[3][0] * a[2][3]) + a[1][3] * (a[2][0] * a[3][1] - a[3][0] * a[2][1]);
        num4 = a[1][0] * (a[2][1] * a[3][2] - a[3][1] * a[2][2]) - a[1][1] * (a[2][0] * a[3][2] - a[3][0] * a[2][2]) + a[1][2] * (a[2][0] * a[3][1] - a[3][0] * a[2][1]);
        det1 = a[0][0] * num1;
        det2 = a[0][1] * num2;
        det3 = a[0][2] * num3;
        det4 = a[0][3] * num4;
        determinant = det1 - det2 + det3 - det4;
        break;
    }
    else if (rows == 3 && columns == 3) {
        printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    // LOGIC USED TO FIND THE DETERMINANT OF A 3X3 MATRIX
        det1 = a[0][0] * (a[1][1] * a[2][2] - a[2][1] * a[1][2]);
        det2 = a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]);
        det3 = a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
        determinant = det1 - det2 + det3;
        break;
    }
    else if (rows == 2 && columns == 2) {
        printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
        determinant = a[0][0] * a[1][1] - a[1][0] * a[1][1]; // LOGIC USED TO FIND DETERMINANT OF A 2X2 MATRIX
        break;
    }
    else {
        printf("INVALID NUMBER OF ROWS OR COLUMNS ENTERED!\nPLEASE KINDLY CHECK THE NOTE AND ENTER AGAIN!\n"); // IN CASE OF WRONG NUMBER ENTERED
        printf("\nPRESS ENTER TO CONTINUE!\n");
        getch();
    }
    } while (rows != 4 || rows != 3 || rows != 2 || columns != 4 || columns != 3 || columns != 2);
    printf("\nTHE DETERMINANT OF THE GIVEN MATRIX IS %d", determinant);
    printf("\n\nENTER '1' TO USE AGAIN.\n"); // PROMPTS THE USER WHETHER TO USE AGAIN OR NOT
    printf("ENTER ANY NUMBER TO EXIT.\n");
    scanf("%d", &choice3);
    if (choice3 == 1) {
       option(); // FUNCTION CALL FOR CHOOSING OUR DESIRED OPERATION
    }
    else {
       printf("\nTHANK YOU :)");
    }
    return 0;
}
int rank() { // DEFINED FUNCTION FOR FINDING THE RANK OF A MATRIX
    int a[100][100], i, j, rows, columns, determinant, num1, num2, num3, num4, det1, det2, det3, det4, rank = 0, choice4;
    printf("\nYOU HAVE CHOSEN TO FIND THE RANK OF A MATRIX!\n");
    printf("NOTE: YOU CAN CHOOSE ONLY 2X2, 3X3, AND 4X4 MATRICES FOR FINDING THE RANK!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n\n");
    getch();
    do {
    printf("\nENTER NUMBER OF ROWS = ");
    scanf("%d", &rows);
    printf("ENTER NUMBER OF COLUMNS = ");
    scanf("%d", &columns);
    if (rows == 4 && columns == 4) {
        printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    // LOGIC TO FIND THE DETERMINANT OF A 4X4 MATRIX
        num1 = a[1][1] * (a[3][3] * a[2][2] - a[3][2] * a[2][3]) - a[1][2] * (a[3][3] * a[2][1] - a[3][1] * a[2][3]) + a[1][3] * (a[2][1] * a[3][2] - a[3][1] * a[2][2]);
        num2 = a[1][0] * (a[2][2] * a[3][3] - a[3][2] * a[2][3]) - a[1][2] * (a[2][0] * a[3][3] - a[3][0] * a[2][3]) + a[1][3] * (a[2][0] * a[3][2] - a[3][0] * a[2][2]);
        num3 = a[1][0] * (a[2][1] * a[3][3] - a[3][1] * a[2][3]) - a[1][1] * (a[2][0] * a[3][3] - a[3][0] * a[2][3]) + a[1][3] * (a[2][0] * a[3][1] - a[3][0] * a[2][1]);
        num4 = a[1][0] * (a[2][1] * a[3][2] - a[3][1] * a[2][2]) - a[1][1] * (a[2][0] * a[3][2] - a[3][0] * a[2][2]) + a[1][2] * (a[2][0] * a[3][1] - a[3][0] * a[2][1]);
        det1 = a[0][0] * num1;
        det2 = a[0][1] * num2;
        det3 = a[0][2] * num3;
        det4 = a[0][3] * num4;
        determinant = det1 - det2 + det3 - det4;
        det1 = 0;
        det2 = 0;
        det3 = 0;
        det4 = 0;
        if (determinant != 0) {
            rank = 4;
            printf("\nTHE RANK OF THE GIVEN MATRIX IS %d", rank);
            break;
        }
        else {
            det1 = a[1][1] * (a[3][3] * a[2][2] - a[3][2] * a[2][3]);
            det2 = a[1][2] * (a[3][3] * a[2][1] - a[3][1] * a[2][3]);
            det3 = a[1][3] * (a[3][2] * a[2][1] - a[3][1] * a[2][2]);
            determinant = det1 - det2 + det3;
            det1 = 0;
            det2 = 0;
            det3 = 0;
            if (determinant != 0) {
                rank = 3;
                printf("\nTHE RANK OF THE GIVEN MATRIX IS %d", rank);
                break;
            }
            else {
                determinant = a[2][2] * a[3][3] - a[3][2] * a[2][3];
                if (determinant != 0) {
                    rank = 2;
                    printf("\nTHE RANK OF THE GIVEN MATRIX IS %d", rank);
                    break;
                }
                else {
                    rank = 1;
                    printf("\nTHE RANK OF THE GIVEN MATRIX IS %d", rank);
                    break;
                }
            }
        }
    }
    else if (rows == 3 && columns == 3) {
        printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    // LOGIC USED TO FIND THE DETERMINANT OF A 3X3 MATRIX
        det1 = a[0][0] * (a[1][1] * a[2][2] - a[2][1] * a[1][2]);
        det2 = a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]);
        det3 = a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
        determinant = det1 - det2 + det3;
        det1 = 0;
        det2 = 0;
        det3 = 0;
        if (determinant != 0) {
            rank = 3;
            printf("\nTHE RANK OF THE GIVEN MATRIX IS %d", rank);
            break;
        }
        else {
            determinant = a[2][2] * a[1][1] - a[2][1] * a[1][2];
            if (determinant != 0) {
                rank = 2;
                printf("\nTHE RANK OF THE GIVEN NUMBER IS %d", rank);
                break;
            } 
            else {
                rank = 1;
                printf("\nTHE RANK OF THE GIVEN MATRIX IS %d", rank);
                break;
            }
        }
    }
    else if (rows == 2 && columns == 2) {
    printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
        determinant = a[0][0] * a[1][1] - a[1][0] * a[0][1]; // LOGIC USED TO FIND THE DETERMINANT OF A 2X2 MATRIX
        if (determinant != 0) {
            rank = 2;
            printf("\nTHE RANK OF THE GIVEN MATRIX IS %d", rank);
            break;
        }
        else {
            rank = 1;
            printf("\nTHE RANK OF THE GIVEN MATRIX IS %d", rank);
            break;
        }
    }
    else {
        printf("INVALID NUMBER OF ROWS OR COLUMNS ENTERED!\nPLEASE KINDLY CHECK THE NOTE AND ENTER AGAIN!\n"); // IN CASE OF WRONG NUMBER ENTERED
        printf("PRESS ENTER TO CONTINUE!\n\n");
        getch();
    }
    } while (rows != 4 || rows != 3 || rows != 2 || columns != 4 || columns != 3 || columns != 2);
    printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPTS THE USER WHETHER TO USE AGAIN OR NOT
    printf("ENTER ANY NUMBER TO EXIT.\n");
    scanf("%d", &choice4);
    if (choice4 == 1) {
       option(); // FUNCTION CALL FOR CHOOSING OUR DESIRED OPERATION
    }
    else {
       printf("\nTHANK YOU :)");
    }
    return 0;
}
int adjoint() { // DEFINED FUNCTION TO FIND THE ADJOINT OF A MATRIX
    int a[100][100], i, j, rows, columns, choice5, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
    printf("\nYOU HAVE CHOSEN TO FIND THE ADJOINT OF A MATRIX!\n");
    printf("NOTE: YOU CAN CHOOSE ONLY 2X2, 3X3, AND 4X4 MATRICES FOR FINDING THE ADJOINT!\n\n");
    printf("PRESS ENTER TO CONTINUE!\n\n");
    getch();
    do {
    printf("\nENTER NUMBER OF ROWS = ");
    scanf("%d", &rows);
    printf("ENTER NUMBER OF COLUMNS = ");
    scanf("%d", &columns);
    if (rows == 4 && columns == 4) {
     printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    // LOGIC USED TO FIND THE COFACTORS OF A 4X4 MATRIX
     a1 = a[1][1] * (a[3][3] * a[2][2] - a[3][2] * a[2][3]) - a[1][2] * (a[2][1] * a[3][3] - a[3][1] * a[2][3]) + a[1][3] * (a[2][1] * a[3][2] - a[3][1] * a[2][2]);
    a2= a[1][0] * (a[3][3] * a[2][2] - a[3][2] * a[2][3]) - a[1][2] * (a[2][0] * a[3][3] - a[3][0] * a[2][3]) + a[1][3] * (a[2][0] * a[3][2] - a[3][0] * a[2][2]);
    a3 = a[1][0] * (a[2][1] * a[3][3] - a[3][1] * a[2][3]) - a[1][1] * (a[2][0] * a[3][3] - a[3][0] * a[2][3]) + a[1][3] * (a[2][0] * a[3][1] - a[3][0] * a[2][1]);
    a4 = a[1][0] * (a[2][1] * a[3][2] - a[3][1] * a[2][2]) - a[1][1] * (a[2][0] * a[3][2] - a[3][0] * a[2][2]) + a[1][2] * (a[2][0] * a[3][1] - a[3][0] * a[2][1]);
    a5 = a[0][1] * (a[3][3] * a[2][2] - a[3][2] * a[2][3]) - a[0][2] * (a[3][3] * a[2][1] - a[3][1] * a[2][3]) + a[0][3] * (a[3][2] * a[2][1] - a[3][1] * a[2][2]);
    a6 = a[0][0] * (a[3][3] * a[2][2] - a[3][2] * a[2][3]) - a[0][2] * (a[3][3] * a[2][0] - a[3][0] * a[2][3]) + a[0][3] * (a[3][2] * a[2][0] - a[3][0] * a[2][2]);
    a7 = a[0][0] * (a[3][3] * a[2][1] - a[3][1] * a[2][3]) - a[0][1] * (a[3][3] * a[2][0] - a[3][0] * a[2][3]) + a[0][3] * (a[3][1] * a[2][0] - a[3][0] * a[2][1]);
    a8 = a[0][0] * (a[3][2] * a[2][1] - a[3][1] * a[2][2]) - a[0][1] * (a[3][2] * a[2][0] - a[3][0] * a[2][2]) + a[0][2] * (a[3][1] * a[2][0] - a[3][0] * a[2][1]);
    a9 = a[0][1] * (a[3][3] * a[1][2] - a[3][2] * a[1][3]) - a[0][2] * (a[3][3] * a[1][1] - a[3][1] * a[1][3]) + a[0][3] * (a[3][2] * a[1][1] - a[3][1] * a[1][2]);
    a10 = a[0][0] * (a[3][3] * a[1][2] - a[3][2] * a[1][3]) - a[0][2] * (a[3][3] * a[1][0] - a[3][0] * a[1][3]) + a[0][3] * (a[3][2] * a[1][0] - a[3][0] * a[1][2]);
    a11 = a[0][0] * (a[3][3] * a[1][1] - a[3][1] * a[1][3]) - a[0][1] * (a[3][3] * a[1][0] - a[3][0] * a[1][3]) + a[0][3] * (a[3][1] * a[1][0] - a[3][0] * a[1][1]);
    a12 = a[0][0] * (a[3][2] * a[1][1] - a[3][1] * a[1][2]) - a[0][1] * (a[3][2] * a[1][0] - a[3][0] * a[1][2]) + a[0][2] * (a[3][1] * a[1][0] - a[3][0] * a[1][1]);
    a13 = a[0][1] * (a[2][3] * a[1][2] - a[2][2] * a[1][3]) - a[0][2] * (a[2][3] * a[1][1] - a[2][1] * a[1][3]) + a[0][3] * (a[2][2] * a[1][1] - a[2][1] * a[1][2]);
    a14 = a[0][0] * (a[2][3] * a[1][2] - a[2][2] * a[1][3]) - a[0][2] * (a[2][3] * a[1][0] - a[2][0] * a[1][3]) + a[0][3] * (a[2][2] * a[1][0] - a[2][0] * a[1][2]);
    a15 = a[0][0] * (a[2][3] * a[1][1] - a[2][1] * a[1][3]) - a[0][1] * (a[2][3] * a[1][0] - a[2][0] * a[1][3]) + a[0][3] * (a[2][1] * a[1][0] - a[2][0] * a[1][1]);
    a16 = a[0][0] * (a[2][2] * a[1][1] - a[2][1] * a[1][2]) - a[0][1] * (a[2][2] * a[1][0] - a[2][0] * a[1][2]) + a[0][2] * (a[2][1] * a[1][0] - a[2][0] * a[1][1]);
    printf("\nTHE MATRIX WITH COFACTORS IS: \n");
    printf("%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n", a1, -a2, a3, -a4, -a5, a6, -a7, a8, a9, -a10, a11, -a12, -a13, a14, -a15, a16);
    printf("THE ADJOINT OF GIVEN MATRIX IS: \n");
    printf("%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n", a1, -a5, a9, -a13, -a2, a6, -a10, a14, a3, -a7, a11, -a15, -a4, a8, -a12, a16);
    printf("\nTHE RESULTANT MATRIX IS: \n");
    break;
    }
    else if (rows == 3 && columns == 3) {
    printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    // LOGIC USED TO FIND THE COFACTORS OF A 3X3 MATRIX
    a1 = a[2][2] * a[1][1] - a[2][1] * a[1][2];
    a2 = a[2][2] * a[1][0] - a[2][0] * a[1][2];
    a3 = a[2][1] * a[1][0] - a[2][0] * a[1][1];
    a4 = a[2][2] * a[0][1] - a[2][1] * a[0][2];
    a5 = a[2][2] * a[0][0] - a[2][0] * a[0][2];
    a6 = a[2][1] * a[0][0] - a[2][0] * a[0][1];
    a7 = a[1][2] * a[0][1] - a[1][1] * a[0][2];
    a8 = a[1][2] * a[0][0] - a[1][0] * a[0][2];
    a9 = a[1][1] * a[0][0] - a[1][0] * a[0][1];
    printf("\nTHE MATRIX WITH COFACTORS IS: \n");
    printf("%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n", a1, -a2, a3, -a4, a5, -a6, a7, -a8, -a9);
    printf("\nTHE ADJOINT OF GIVEN MATRIX IS: \n");
    printf("%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n%d\t%d\t%d\t%d\n\n", a1, -a4, a7, -a2, a5, -a8, a3, -a6, a9);
    break;
    }
    else if (rows == 2 && columns == 2) {
    printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    printf("\nTHE RESULTANT MATRIX IS: \n");
    printf("%d\t%d\t\n\n%d\t%d", a[1][1], -a[0][1], -a[1][0], a[0][0]);
    break;
    }
    else {
        printf("INVALID NUMBER OF ROWS OR COLUMNS ENTERED!\nPLEASE KINDLY CHECK THE NOTE AND ENTER AGAIN!\n"); // IN CASE OF WRONG NUMBER ENTERED
        printf("PRESS ENTER TO CONTINUE!\n\n");
        getch();
    }
    } while (rows != 4 || rows != 3 || rows != 2 || columns != 4 || columns != 3 || columns != 2);
    printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPTS THE USER WHETHER TO USE AGAIN OR NOT
    printf("ENTER ANY NUMBER TO EXIT.\n");
    scanf("%d", &choice5);
    if (choice5 == 1) {
       option(); // FUNCTION CALL FOR CHOOSING OUR DESIRED OPERATION
    }
    else {
       printf("\nTHANK YOU :)");
    }
    return 0;
}
int transpose() { // DEFINED FUNCTION FOR FINDING THE TRANSPOSE OF A MATRIX
    int first[100][100], second[100][100], i, j, rows, columns, choice7;
    printf("\nYOU HAVE CHOSEN TO FIND THE TRANSPOSE OF A MATRIX!\n");
    printf("PRESS ENTER TO CONTINUE!\n\n");
    getch();
    printf("\nENTER NUMBER OF ROWS = ");
    scanf("%d", &rows);
    printf("ENTER NUMBER OF COLUMNS = ");
    scanf("%d", &columns);
    printf("\nENTER THE ELEMENTS OF THE MATRIX:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("ENTER A%d%d = ", i+1, j+1);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\nTHE GIVEN MATRIX IS:\n\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", first[i][j]);
        }
        printf("\n\n");
    } 
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            second[j][i] = first[i][j];
        }
    }
    printf("\nTHE RESULTANT MATRIX IS: \n");
    for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            printf("%d\t", second[i][j]);
        }
        printf("\n\n");
    }
    printf("\nENTER '1' TO USE AGAIN.\n"); // PROMPTS THE USER WHETHER TO USE AGAIN OR NOT
    printf("ENTER ANY NUMBER TO EXIT.\n");
    scanf("%d", &choice7);
    if (choice7 == 1) {
       option(); // FUNCTION CALL FOR CHOOSING OUR DESIRED OPERATION
    }
    else {
       printf("\nTHANK YOU :)");
    }
    return 0;
}
int main() {
    int preference;
    printf("########## MATRIX CALCULATOR ##########\n\n");
    option(); // FUNCTION CALL FOR CHOOSING OUR DESIRED OPERATION
    return 0;
}
int option() {
    char preference;
    do {
    printf("\nPLEASE ENTER YOUR OPERATION!\n");
    printf("ENTER ANY ONE NUMBER BETWEEN A-H.\n\n");
    printf("A. FIND SUM OF TWO MATRICES.\n");
    printf("B. FIND DIFFERENCE OF TWO MATRICES.\n");
    printf("C. FIND PRODUCT OF TWO MATRICES.\n");
    printf("D. FIND TRANSPOSE OF A MATRIX.\n");
    printf("E. FIND THE DETERMINANT OF A MATRIX.\n");
    printf("F. FIND THE RANK OF A MATRIX.\n");
    printf("G. FIND THE ADJOINT OF A MATRIX.\n\n");
    printf("PLEASE ENTER BLOCK LETTERS ONLY!\n");
    scanf("%s", &preference);
    if (preference == 'A') {
        addition(); // FUNCTION CALL TO ADD TWO MATRICES
        break;
    }
    else if (preference == 'B') {
        subtraction(); // FUNCTION CALL TO SUBTRACT TWO MATRICES
        break;
    }
    else if (preference == 'C') {
        multiplication(); // FUNCTION CALL TO MULTIPLY TWO MATRICES
        break;
    }
    else if (preference == 'D') {
        transpose(); // FUNCTION CALL TO FIND THE TRANSPOSE OF A MATRIX
        break;
    }
    else if (preference == 'E') {
        determinant(); // FUNCTION CALL TO FIND THE DETERMINANT OF A MATRIX
        break;
    }
    else if (preference == 'F') {
        rank(); // FUNCTION CALL TO FIND THE RANK OF A MATRIX
        break;
    }
    else if (preference == 'G') {
        adjoint(); // FUNCTION CALL TO FIND THE ADJOINT OF A MATRIX
        break;
    }
    else {
        printf("\nINVALID OPTION CHOSEN!\nPLEASE ENTER THE CORRECT OPTION!\n"); // IN CASE OF WRONG OPTION ENTERED
        printf("\nPRESS ENTER TO CONTINUE!\n");
        getch();
    }
    } while (preference != 'A' || preference != 'B' || preference != 'C' || preference != 'D' || preference != 'E' || preference != 'F' || preference != 'G');
    return 0;
}
