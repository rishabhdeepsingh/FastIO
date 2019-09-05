# KOTLIN
# Samples

### 2D Arrays
```kotlin
val type1 = Array(n) { IntArray(n) }
val type2 = Array(n, { IntArray(m) })
val type3 = arrayOf(
    intArrayOf(8, 9, 1, 13),
    intArrayOf(3, 12, 7, 5),
    intArrayOf(0, 2, 4, 11),
    intArrayOf(6, 10, 15, 14)
)
```

### Comparing Pairs
```kotlin
class CustomComparator : Comparator<Pair<Int, Pair<Int, Int>>> {
    override fun compare(o1: Pair<Int, Pair<Int, Int>>, o2: Pair<Int, Pair<Int, Int>>): Int {
        return o1.first.compareTo(o2.first)
    }
}

val arrayList = ArrayList<Pair<Int, Pair<Int, Int>>>()
val sorted = arrayList.sortedWith(CustomComparator())
```
### HashMap
```kotlin
val hashMap = HashMap<String, Int>()
for (i in 0..n - 2) {
    val w = s.substring(i, i + 2)
    val c = hashMap.getOrElse(w) { 0 }
    hashMap.put(w, c + 1)
}
```

### if else
```kotlin
val max = if (a > b) a else b
```

### Printing
```kotlin
println("${l+1} and $r")
```

### Sorting
```kotlin
val b = nextLongs().sorted() // a is mutable list
val a = arrayListOf<Long>()
a.addAll(nextLongs())
a.sort()
```

### Swap Int
```kotlin
var a = 10
var b = 30
a = b.also { b = a }
```

### Type Alias
```kotlin
typealias PII = Pair<Int, Int>
typealias PPII = Pair<Int, PII>

// Usage
arrayList.add(PPII(1, PII(1, 2)))
```

# Sources
- [Array](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-array/index.html)
- [ArrayList](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/-array-list/index.html)
- [Binary Search](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/binary-search.html)
- [Ranges](https://kotlinlang.org/docs/reference/ranges.html)