//#include "osm.h"
//#include <iostream>
//#include <sys/time.h>
//
///* Time measurement function for a simple arithmetic operation.
//   returns time in nano-seconds upon success,
//   and -1 upon failure.
//   */
//double osm_operation_time(unsigned int iterations)
//{
//    if(iterations <= 0)
//    {
//        return -1;
//    }
//    int final = (iterations - (iterations%4) + 4)/4;
//    long iterationsTime = 0;
//    int x = 0,y= 0,z=0,k=0;
//    timeval first;
//    timeval end;
//    for (int i = 0; i< final ; ++i)
//    {
//        gettimeofday(&first, NULL);
//        x += 1;
//        y += 1;
//        z += 1;
//        k += 1;
//        gettimeofday(&end, NULL);
//        iterationsTime += end.tv_usec - first.tv_usec;
//    }
//    return (double)iterationsTime/final;
//}
//
///* Time measurement function for an empty function call.
//   returns time in nano-seconds upon success,
//   and -1 upon failure.
//   */
//double osm_function_time(unsigned int iterations)
//{
//    return 0;
//}
//
///* Time measurement function for an empty trap into the operating system.
//   returns time in nano-seconds upon success,
//   and -1 upon failure.
//   */
//double osm_syscall_time(unsigned int iterations)
//{
//    return 0;
//}
//
//
//double sys(unsigned int iterations)
//{
//    if(iterations <= 0)
//    {
//        return -1;
//    }
//    int final = (iterations - (iterations%4) + 4)/4;
//    long iterationsTime = 0;
////    int x = 0,y= 0,z=0,k=0;
//    timeval first;
//    timeval end;
//    for (int i = 0; i< final ; ++i)
//    {
//        gettimeofday(&first, NULL);
////        x += 1;
////        y += 1;
////        z += 1;
////        k += 1;
//        gettimeofday(&end, NULL);
//        iterationsTime += end.tv_usec - first.tv_usec;
//    }
//    return (double)iterationsTime/final;
//}
//int main(){
//    std::cout<<osm_operation_time(400000);
//}


#include <iostream>
#include <sys/time.h>



#define OSM_NULLSYSCALL asm volatile( "int $0x80 " : : \
        "a" (0xffffffff) /* no such syscall */, "b" (0), "c" (0), "d" (0) /*:\
        "eax", "ebx", "ecx", "edx"*/)



double osm_operation_time(unsigned int iterations)
{
    if(iterations <= 0)
    {
        return -1;
    }
    int final = (iterations - (iterations%24) + 24)/24;
    long iterationsTime = 0;
    int x = 0,y= 0,z=0,k=0;
    timeval first;
    timeval end;
    for (int i = 0; i< final ; ++i)
    {
        gettimeofday(&first, NULL);
        x += 1;
        y += 1;
        z += 1;
        k += 1;
        x += 1;
        y += 1;
        z += 1;
        k += 1;
        x += 1;
        y += 1;
        z += 1;
        k += 1;
        x += 1;
        y += 1;
        z += 1;
        k += 1;
        x += 1;
        y += 1;
        z += 1;
        k += 1;
        x += 1;
        y += 1;
        z += 1;
        k += 1;
        gettimeofday(&end, NULL);
        iterationsTime += end.tv_usec - first.tv_usec;
    }
    return (double)iterationsTime/iterations;
}
void tempfunc(){}

double osm_msh4l_time(unsigned int iterations)
{
    if(iterations <= 0)
    {
        return -1;
    }
    int final = (iterations - (iterations%24) + 24)/24;
    long iterationsTime = 0;
    int x = 0,y= 0,z=0,k=0;
    timeval first;
    timeval end;
    for (int i = 0; i< final ; ++i)
    {
        gettimeofday(&first, NULL);
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        tempfunc();
        gettimeofday(&end, NULL);
        iterationsTime += end.tv_usec - first.tv_usec;
    }
    return (double)iterationsTime/iterations;
}


double osm_sob7e_time(unsigned int iterations)
{
    if(iterations <= 0)
    {
        return -1;
    }
    int final = (iterations - (iterations%24) + 24)/24;
    long iterationsTime = 0;
    int x = 0,y= 0,z=0,k=0;
    timeval first;
    timeval end;
    for (int i = 0; i< final ; ++i)
    {
        gettimeofday(&first, NULL);
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;



        gettimeofday(&end, NULL);
        iterationsTime += end.tv_usec - first.tv_usec;
    }
    return (double)iterationsTime/iterations;
}


int main() {
    std::cout <<  osm_operation_time(1000000) << std::endl;
    std::cout <<  osm_msh4l_time(1000000) << std::endl;
    std::cout <<  osm_sob7e_time(1000000) << std::endl;
    return 0;
}