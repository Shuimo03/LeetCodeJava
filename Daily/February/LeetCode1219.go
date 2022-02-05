package february

var dirs = []struct{ x, y int }{{-1, 0}, {1, 0}, {0, -1}, {0, 1}}

func getMaximumGold(grid [][]int) (ans int) {
	var dfs func(x, y, gold int)
	dfs = func(x, y, gold int) {
		if gold > ans {
			ans = gold
		}
		rec := grid[x][y]
		grid[x][y] = 0

		for _, d := range dirs {
			nx, ny := x+d.x, y+d.x
			if 0 <= nx && nx < len(grid) && 0 <= ny && ny < len(grid[nx]) && grid[nx][ny] > 0 {
				dfs(nx, ny, gold)
			}
		}
		grid[x][y] = rec
	}

	for i, row := range grid {
		for j, gold := range row {
			if gold > 0 {
				dfs(i, j, 0)
			}

		}
	}
	return
}