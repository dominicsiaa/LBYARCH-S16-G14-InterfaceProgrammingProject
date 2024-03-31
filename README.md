x86-to-C Interface Programming Project
LBYARCH S16, Group 14
- Montenegro, Jaycee
- Sia, Dominic

Results:
- Program output with correctness check can be found in output.png
- Execution time measurements were done on a vector with the same value

DEBUG MODE:
* 2^20
  * C:          0.002233 s
  * Assembly:   0.001600 s
* 2^24
  * C:          0.036733 s
  * Assembly:   0.026133 s
* 2^28
  * C:          0.583333 s
  * Assembly:   0.407067 s

RELEASE MODE:
* 2^20
  * C:          0.000000 s
  * Assembly:   0.001867 s
* 2^24
  * C:          0.000000 s
  * Assembly:   0.027067 s
* 2^28
  * C:           0.000000 s
  * Assembly:    0.430667 s

Analysis:

Our comparative analysis between Assembly and C programming languages, particularly in Debug mode, indicates that Assembly leads to a significant reduction in execution time, demonstrating improvements of 28.39%, 28.86%, and 30.22% for data sizes of 2^20, 2^24, and 2^28, respectively. This performance enhancement is attributed to Assembly's lower-level nature, which reduces overhead and offers a wider range of optimization opportunities. In contrast, C's performance in Debug mode is slightly slower due to its higher-level abstraction, which introduces more overhead and fewer options for performance optimization. However, it's noteworthy that in Release mode, the performance measurement for C intriguingly registers at 0 seconds due to an unidentified issue with clock checks. Despite this anomaly, both languages exhibit impressive speeds when compared to other programming options, underscoring the value of learning Assembly for its efficiency benefits.
