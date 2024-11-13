# ft_printf

## 목차

  - [소개](#소개)
  - [기능](#기능)
  - [설치](#설치)
  - [함수 목록](#함수-목록)
  - [프로젝트 구조](#프로젝트-구조)

---

## 소개

**ft_printf**는 C 프로젝트로, C 표준 라이브러리에 있는 표준 `printf` 기능을 재현하는 것을 목표로 합니다. 이 사용자 정의 구현은 문자열, 정수, 부동 소수점 숫자 및 기타 데이터 유형의 형식을 지정할 수 있는 다양한 형식 지정자를 지원합니다. **ft_printf**의 목표는 C에서 가변 인수 목록과 문자열 조작에 대한 이해를 깊게 하면서 형식화된 출력을 생성할 수 있는 유연한 방법을 제공하는 것입니다.

## 기능

- `printf` 함수의 맞춤 구현.
- `%d`, `%s`, `%x` 등 다양한 형식 지정자를 지원.
- `va_list`를 사용하여 가변 인수를 처리.

---

## 설치

**ft_printf**를 설치하려면, 리포지토리를 클론한 후 `make` 명령어로 코드를 컴파일하세요:

```
git clone https://github.com/darambae/ft_printf.git
cd ft_printf
make
```

---

## 함수 목록

- `ft_printf` - `printf` 함수의 맞춤 구현.
- `ft_print_char` - 표준 출력에 문자를 씁니다.
- `ft_print_str` - 표준 출력에 문자열을 씁니다.
- `ft_print_int` - 표준 출력에 정수를 씁니다.
- `ft_print_hex` - 표준 출력에 16진수를 씁니다.
- `ft_print_unsigned` - 표준 출력에 부호 없는 정수를 씁니다.
- `ft_print_pointer` - 표준 출력에 포인터 주소를 씁니다.

---

## 프로젝트 구조

```
ft_printf/
│
├── ft_printf.c
├── ft_print_char.c
├── ft_print_str.c
├── ft_print_int.c
├── ft_print_hex.c
├── ft_print_unsigned.c
├── ft_print_pointer.c
├── ft_printf.h
├── Makefile
└── README.md
```
