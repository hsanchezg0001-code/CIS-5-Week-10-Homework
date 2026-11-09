# Practice 10 · Gradebook tools

**Week 10 · Pointers & References**  
**Theme:** Change data through a function  
**Due:** Monday night. This assignment is not due Sunday.


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

The video is half the grade. Show the run, then explain which variables each function changed and why.

**Your demo:** _[my week 1o link](https://youtu.be/koxpkz1U704)_


## What to build

Three small functions that work on one array of scores. Each function receives its data a different way: an array, references, and a pointer. `main` prints the scores before and after so you can see what changed.

| Function | Receives | Job |
|----------|----------|-----|
| `void curve(int scores[], int n, int points)` | an array | Add `points` to every score. Main's array changes. |
| `void minMax(const int scores[], int n, int& lo, int& hi)` | references | Store the lowest and highest score in main's `lo` and `hi`. |
| `bool findScore(const int scores[], int n, int target, int* where)` | a pointer | If `target` is found, write its index through `where` and return `true`. If `where` is `nullptr`, only return `true` or `false`. |

## Requirements

- Use the three signatures above exactly
- `curve` Takes the array as a decayed pointer to the original memory, adds points to each element in place, and returns nothing.
- `minMax` Reads the array with const protection and returns two separate outputs directly into main's variables via reference parameters (&lo and &hi).
- `findScore`Reads the array to search for a target value, returning a boolean status while safely writing the found index through a dereferenced pointer (*where) only when where != nullptr.
- Pass the size `n` with every array. Do not use `sizeof` inside a function
- Use `const` on array parameters the function only reads
- README: one sentence for each function saying how its data gets in and out

## Sample session

```
Before: 72 88 95 60 81
Low: 60  High: 95
After curve +5: 77 93 100 65 86
100 found at index 2
50 not found
```

## Starter

`main.cpp` has the three signatures and a `main` that calls them. Put your name in the file-top comment, then fill in the bodies.

## Environment

VS 2022 · **GitHub Codespaces** · Replit · library machines

## Deliverables

1. Course-visible GitHub repo
2. README with the three sentences
3. Short demo video: show the run, then explain which variables each function changed and why
4. Canvas links

## Scope fence

No `new` / `delete`. No pointer arithmetic beyond `a[i]`. No double pointers.

## Integrity

- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric (100)

| Criterion | Pts |
|-----------|----:|
| Code submitted that does the work | 50 |
| Video explanation | 50 |

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
