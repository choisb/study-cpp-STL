﻿# Function Object
## 📝 목차
- [함수 객체란](https://github.com/choisb/Study-Cpp-STL/tree/master/Ch09_Function_Object#-함수-객체란)
- [일반 함수 객체](https://github.com/choisb/Study-Cpp-STL/tree/master/Ch09_Function_Object#-일반-함수-객체)
- [함수 어댑터](https://github.com/choisb/Study-Cpp-STL/tree/master/Ch09_Function_Object#-함수-어댑터)
___
## ✔ 함수 객체란
- **함수 객체란?**
    - 함수 객체(function object) 혹은 함수자(functor)는 `operator()` 연산자를 오버로딩한 클래스 객체를 뜻한다.
    - STL에서는 아래의 함수객체를 표준으로 제공한다.

- **STL 함수 객체의 두 가지 분류**
  - 일반 함수 객체: 특정 기능을 수행하는 함수 객체 
    - 산술 연산 함수 객체 
    - 비교 연산 함수 객체 조건자 
    - 논리 연산 함수 객체 조건자

  - 함수 어댑터: 함수류를 인자로 받아 다른 함수 객체로 변환
    - 바인더
    - 부정자
    - 함수 포인터 어댑터
    - 멤버 함수 포인터 어댑터

___
## ✔ 일반 함수 객체
- 일반 함수 객체: 특정 기능을 수행하는 함수 객체 
#### 📍 산술 연산 함수 객체

- **산술 연산 함수 객체의 종류**
  - `plus<T>` : 이항 연산 함수자로 `+` 연산
  - `minus<T>` : 이항 연산 함수자로 `-` 연산
  - `multiplies<T>` : 이항 연산 함수자로 `*` 연산
  - `divides<T>` : 이항 연산 함수자로 `/` 연산
  - `modulus<T>` : 이항 연산 함수자로 `%` 연산
  - `negate<T>` : 단항 연산 함수자로 `-` 연산 (부호를 변환)
 
- **STL 산술 연산자 함수 객체** 호출 및 **사용자 산술 연산자 함수 객체** 구현
  > 예시는 소스 코드 참고 [(바로 가기)](https://github.com/choisb/Study-Cpp-STL/blob/master/Ch09_Function_Object/ex04_plus.cpp)  
- **STL 산술 연산자 함수 객체** 사용
  > 예시는 소스 코드 참고 [(바로 가기)](https://github.com/choisb/Study-Cpp-STL/blob/master/Ch09_Function_Object/ex05_Arithmetic_operators.cpp)

#### 📍 비교 연산 조건자

- **비교 연산 조건자 종류**
  - `equap_to<T>` : 이항 조건자로 `==` 연산
  - `not_equal_to<T>` : 이항 조건자로 `!=` 연산
  - `less<T>` : 이항 조건자로 `<` 연산
  - `less_equal<T>` : 이항 조건자로 `<=` 연산
  - `greater<T>` : 이항 조건자로 `>` 연산
  - `greater_equal<T>` : 이항 조건자로 `>=` 연산
 
- **STL 비교 연산 조건자** 호출 및 **사용자 비교 연산 조건자**구현
  > 예시는 소스 코드 참고 [(바로 가기)](https://github.com/choisb/Study-Cpp-STL/blob/master/Ch09_Function_Object/ex06_less.cpp)  
- **STL 비교 연산 조건자** 사용
  > 예시는 소스 코드 참고 [(바로 가기)](https://github.com/choisb/Study-Cpp-STL/blob/master/Ch09_Function_Object/ex07_compare_operators.cpp)  

#### 📍 논리 연산 조건자
- **논리 연산 조건자 종류**
  - `logical_and<T>` : 이항 조건자로 `&&` 연산
  - `logical_or<T>` : 이항 조건자로 `||` 연산
  - `logical_not<T>` : 단항 조건자로 `!` 연산

- **STL 논리 연산 조건자** 호출 및 **사용자 논리 연산 조건자**구현
  > 예시는 소스 코드 참고 [(바로 가기)](https://github.com/choisb/Study-Cpp-STL/blob/master/Ch09_Function_Object/ex08_logical.cpp)  

___
## ✔ 함수 어댑터
- 함수 어댑터란: 함수류를 인자로 받아 다른 함수 객체로 변환

#### 📍 바인더
- 바인더는 이항 함수자를 단항 함수자로 변환.

- ~~STL은 다음 두 가지 바인더를 제공~~ *(`C++11` 부터 사용하지 않고, `C++17` 부터 삭제됨)*
  - `bind1st`: 이항 함수자의 **첫 번째** 인자를 고정하여 단항 함수자로 변환
  - `bind2nd`: 이항 함수자의 **두 번째** 인자를 고정하여 단항 함수자로 변환
- **`C++17` 이후 부터:** `bind()`로 통합
  - `std::placeholders::`를 사용하여서 입력받을 인자를 지정하거나 `std::placeholders::` 사용하지 않고 상수로 고정 할 수 있다.
- 자세한 `bind()` 사용 방법
  > 예시는 소스 코드 참고 [(바로 가기)](https://github.com/choisb/Study-Cpp-STL/blob/master/Ch09_Function_Object/ex03_bind.cpp)

#### 📍 부정자
- 부정자`negator`는 조건자를 반대의 조건자로 변환.

- ~~STL은 다음 두 가지 부정자를 제공~~ *(`C++11` 부터 사용하지 않고, `C++17` 부터 삭제됨)*
  - `not1`: **단항 조건자**를 반대의 조건자로 변환
  - `not2`: **이항 조건자**를 반대의 조건자로 변환
- **`C++17` 이후 부터:** `not_fn()`로 통합
  > 예시는 소스 코드 참고 [(바로 가기)](https://github.com/choisb/Study-Cpp-STL/blob/master/Ch09_Function_Object/ex09_not_fn.cpp)


#### 📍 함수 포인터 어댑터
- 함수 포인터 어댑터는 일반 함수를 어댑터 적용이 가능한 함수 객체로 변환
- ~~STL은 `ptr_fun()`이라는 함수 포인터 어댑터를 제공.~~ *(`C++11` 부터 사용하지 않고, `C++17` 부터 삭제됨)*
  > 예시는 소스 코드 참고 [(바로 가기)](https://github.com/choisb/Study-Cpp-STL/blob/master/Ch09_Function_Object/ex10_ptr_fun.cpp)

#### 📍 멤버 함수 포인터 어댑터
- 멤버 함수 포인터 어댑터는 멤버 함수를 함수 객체로 변환하여 알고리즘이 객체 원소의 멤버 함수를 호출할 수 있게 한다.
- ~~STL은 다음 두 가지 멤버 함수 포인터 어댑터를 제공~~ *(`C++11` 부터 사용하지 않고, `C++17` 부터 삭제됨)*
  - `mem_fun_ref()`: 객체로 멤버 함수를 호출
  - `mem_fun()`: 객체의 주소로 멤버 함수를 호출 