FILE *fp;

fp = fopen("data.txt", "w");  // open file

if (fp == NULL) {
    printf("File not opened successfully\n");
}

fclose(fp);  // close file