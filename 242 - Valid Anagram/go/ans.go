func isAnagram(s string, t string) bool {
    if len(s) != len(t) {
        return false;
    }
    smap := make(map[byte]int)
    tmap := make(map[byte]int)
    for i := 0; i < len(s); i++ {
        smap[s[i]] += 1
        tmap[t[i]] += 1
    }

    for i := 0; i < len(s); i++ {
        if smap[s[i]] != tmap[s[i]] {
            return false
        }
    }

    return true
}