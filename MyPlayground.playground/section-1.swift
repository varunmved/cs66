// Playground - noun: a place where people can play

import Cocoa

var str = "Hello, playground"

var loopend = 3

let base = 3
let power = 10
var answer = 1
for _ in 1...power {
    answer *= base
}
println("\(base) to the power of \(power) is \(answer)")
// prints "3 to the power of 10 is 59049"