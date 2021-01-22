# C-Plus-Plus
## Note subject to correction
### Coroutines
Coroutines are special functions able to stop at any defined point of execution and resumelater. 
Coroutines extend the language with the following new keywords:
* `co_await` suspends the execution of the coroutine.
* `co_yield` suspends the execution of the coroutine while also returning a value.
* `co_return`  is similar to the regular return keyword; it finishes the coroutineand returns a value.

A coroutine is associated with a `promise` object. The `promise` object stores and alerts the `state` of the coroutine.