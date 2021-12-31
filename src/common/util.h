#pragma once

#include <stdint.h>
#include <string>

typedef int8_t i8;
typedef uint8_t u8;
typedef int16_t i16;
typedef uint16_t u16;
typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

static std::string read_file(const std::string& filePath);

#define PI 3.1415926535897932384626

// Common math functions
#define degrees_to_radians(angleInDegrees) ((angleInDegrees) * PI / 180.0f)
#define radians_to_degrees(angleInRadians) ((angleInRadians) * 180.0f / PI)

static float benchmark_start_time;
static float benchmark_end_time;

#define start_benchmark() (benchmark_start_time = (float)clock()/CLOCKS_PER_SEC)
#define stop_benchmark()  (benchmark_end_time  = (float)clock()/CLOCKS_PER_SEC)

#define benchmark_func(x) start_benchmark(); x; stop_benchmark(); printf("Benchmark: %f\n", benchmark_end_time - benchmark_start_time);