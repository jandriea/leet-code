// method 1
func isAlienSorted(words []string, order string) bool {
    // store the order to hash map
	hmap := make(map[byte]int)
	for i, val := range(order) {
		hmap[byte(val)] = i
	}
	// loop through the list
	for i := 0; i < len(words) - 1; i++ {
		w1, w2 := words[i], words[i + 1]
		// check every char in words
		for j := 0; j < len(w1); j++ {
			if j == len(w2) {
				// reaches the end of w2, means w2 is a prefix of w1
				return false
			}
			if w1[j] != w2[j] {
				// first different char
				// check the value using the hashmap
				if hmap[w1[j]] > hmap[w2[j]] {
					// the current char in w1 comes after char in w2
					return false
				}
				// stop checking the current words, and start the next one 
				break
			}
		}
	}
	return true
}

// method 2
func isAlienSorted(words []string, order string) bool {
	// loop through the list
	for i := 0; i < len(words) - 1; i++ {
		w1, w2 := words[i], words[i + 1]
		// check every char in words
		for j := 0; j < len(w1); j++ {
			if j == len(w2) {
				// reaches the end of w2, means w2 is a prefix of w1
				return false
			}
			if w1[j] != w2[j] {
				// first different char
				// check the value using the hashmap
				if strings.Index(order, string(w1[j])) > strings.Index(order, string(w2[j])) {
					// the current char in w1 comes after char in w2
					return false
				}
				// stop checking the current words, and start the next one 
				break
			}
		}
	}
	return true
}