#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#include <limits.h>
#include <float.h>

// 메모리 관리
#define SAFE_FREE(TARGET)			if((TARGET) != NULL) { free((TARGET)); (TARGET) = NULL; }
#define SAFE_CLOSE(TARGET)			if((TARGET) != NULL) { fclose((TARGET)); (TARGET) = NULL; }
