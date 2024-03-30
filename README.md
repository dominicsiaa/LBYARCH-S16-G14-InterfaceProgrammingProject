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
  * C:           s
  * Assembly:    s
* 2^24
  * C:           s
  * Assembly:    s
* 2^28
  * C:           s
  * Assembly:    s

Analysis:

Our comparative analysis between Assembly and C programming languages indicates that Assembly can lead to a noticeable reduction in execution time, demonstrating 28.39%, 28.86%, and 30.22% improvements for data sizes of 2^20, 2^24, and 2^28 respectively. This performance enhancement is attributed to Assembly's lower-level nature, which reduces overhead and presents a broader spectrum of optimization opportunities. Conversely, C's slightly slower performance is due to its higher-level abstraction, which adds more overhead and also fewer options for optimizing performance. Nevertheless, both languages exhibit impressive speed when compared to other programming options which show the value of learning Assembly for its efficiency.
