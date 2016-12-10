int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int sum=0;
    for(int i=0;i<gridRowSize;i++){
        for(int j=0;j<gridColSize;j++){
            int value = grid[i][j];
            if(value){
                if(i) sum += (value - grid[i-1][j]);
                if(i+1-gridRowSize)sum += (value - grid[i+1][j]);
                if(j)sum += (value - grid[i][j-1]);
                if(j+1-gridColSize)sum += (value - grid[i][j+1]);
                sum += !i;
                sum += !(i+1-gridRowSize);
                sum += !j;
                sum += !(j+1-gridColSize);
            }
        }
    }
    return sum;
}
