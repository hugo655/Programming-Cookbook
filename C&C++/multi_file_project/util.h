#ifndef UTIL_H
#define UTIL_H

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

  typedef struct {
    int age;
    char name[256];
  } person;
  
  double getmean(double* values, int length);

  void print_person_info(person* p);


#ifdef __cplusplus
}
#endif // __cplusplus

#endif //UTIL_H
