/*
** DO NOT EDIT THIS FILE !!!
** It was generated automatically by:
**
**   User: jan
**   Host: myhostname
**   Date: 2018-10-26 09:12:12
**   Prog: /home/jan/make_variadic.sh
**
** Purpose:
**   Defining some helper template metafunctions for emulating variadic
**   templates.
*/
#ifndef VARIADIC_HELPERS_H
#define VARIADIC_HELPERS_H

#include "dcmtk/config/osconfig.h"    /* make sure OS specific configuration is included first */

#include "dcmtk/ofstd/oftraits.h"
#include "dcmtk/ofstd/ofalign.h"

// Some macros for being used in non generated code
#define OFVARIADIC_DECLARE_TEMPLATE_PARAMETER_PACK_WITH_DEFAULTS(N) typename N ## 1=OFvariadic_nil,typename N ## 2=OFvariadic_nil,typename N ## 3=OFvariadic_nil,typename N ## 4=OFvariadic_nil,typename N ## 5=OFvariadic_nil,typename N ## 6=OFvariadic_nil,typename N ## 7=OFvariadic_nil,typename N ## 8=OFvariadic_nil,typename N ## 9=OFvariadic_nil,typename N ## 10=OFvariadic_nil,typename N ## 11=OFvariadic_nil,typename N ## 12=OFvariadic_nil,typename N ## 13=OFvariadic_nil,typename N ## 14=OFvariadic_nil,typename N ## 15=OFvariadic_nil,typename N ## 16=OFvariadic_nil,typename N ## 17=OFvariadic_nil,typename N ## 18=OFvariadic_nil,typename N ## 19=OFvariadic_nil,typename N ## 20=OFvariadic_nil,typename N ## 21=OFvariadic_nil,typename N ## 22=OFvariadic_nil,typename N ## 23=OFvariadic_nil,typename N ## 24=OFvariadic_nil,typename N ## 25=OFvariadic_nil,typename N ## 26=OFvariadic_nil,typename N ## 27=OFvariadic_nil,typename N ## 28=OFvariadic_nil,typename N ## 29=OFvariadic_nil,typename N ## 30=OFvariadic_nil,typename N ## 31=OFvariadic_nil,typename N ## 32=OFvariadic_nil,typename N ## 33=OFvariadic_nil,typename N ## 34=OFvariadic_nil,typename N ## 35=OFvariadic_nil,typename N ## 36=OFvariadic_nil,typename N ## 37=OFvariadic_nil,typename N ## 38=OFvariadic_nil,typename N ## 39=OFvariadic_nil,typename N ## 40=OFvariadic_nil,typename N ## 41=OFvariadic_nil,typename N ## 42=OFvariadic_nil,typename N ## 43=OFvariadic_nil,typename N ## 44=OFvariadic_nil,typename N ## 45=OFvariadic_nil,typename N ## 46=OFvariadic_nil,typename N ## 47=OFvariadic_nil,typename N ## 48=OFvariadic_nil,typename N ## 49=OFvariadic_nil
#define OFVARIADIC_DECLARE_TEMPLATE_PARAMETER_PACK(N) typename N ## 1,typename N ## 2,typename N ## 3,typename N ## 4,typename N ## 5,typename N ## 6,typename N ## 7,typename N ## 8,typename N ## 9,typename N ## 10,typename N ## 11,typename N ## 12,typename N ## 13,typename N ## 14,typename N ## 15,typename N ## 16,typename N ## 17,typename N ## 18,typename N ## 19,typename N ## 20,typename N ## 21,typename N ## 22,typename N ## 23,typename N ## 24,typename N ## 25,typename N ## 26,typename N ## 27,typename N ## 28,typename N ## 29,typename N ## 30,typename N ## 31,typename N ## 32,typename N ## 33,typename N ## 34,typename N ## 35,typename N ## 36,typename N ## 37,typename N ## 38,typename N ## 39,typename N ## 40,typename N ## 41,typename N ## 42,typename N ## 43,typename N ## 44,typename N ## 45,typename N ## 46,typename N ## 47,typename N ## 48,typename N ## 49
#define OFVARIADIC_TEMPLATE_PARAMETER_PACK(N) N ## 1,N ## 2,N ## 3,N ## 4,N ## 5,N ## 6,N ## 7,N ## 8,N ## 9,N ## 10,N ## 11,N ## 12,N ## 13,N ## 14,N ## 15,N ## 16,N ## 17,N ## 18,N ## 19,N ## 20,N ## 21,N ## 22,N ## 23,N ## 24,N ## 25,N ## 26,N ## 27,N ## 28,N ## 29,N ## 30,N ## 31,N ## 32,N ## 33,N ## 34,N ## 35,N ## 36,N ## 37,N ## 38,N ## 39,N ## 40,N ## 41,N ## 42,N ## 43,N ## 44,N ## 45,N ## 46,N ## 47,N ## 48,N ## 49

/** A tag for template parameters to mark them as 'not a template parameter'.
 */
struct OFvariadic_nil;

template<typename T0=OFvariadic_nil,typename T1=OFvariadic_nil,typename T2=OFvariadic_nil,typename T3=OFvariadic_nil,typename T4=OFvariadic_nil,typename T5=OFvariadic_nil,typename T6=OFvariadic_nil,typename T7=OFvariadic_nil,typename T8=OFvariadic_nil,typename T9=OFvariadic_nil,typename T10=OFvariadic_nil,typename T11=OFvariadic_nil,typename T12=OFvariadic_nil,typename T13=OFvariadic_nil,typename T14=OFvariadic_nil,typename T15=OFvariadic_nil,typename T16=OFvariadic_nil,typename T17=OFvariadic_nil,typename T18=OFvariadic_nil,typename T19=OFvariadic_nil,typename T20=OFvariadic_nil,typename T21=OFvariadic_nil,typename T22=OFvariadic_nil,typename T23=OFvariadic_nil,typename T24=OFvariadic_nil,typename T25=OFvariadic_nil,typename T26=OFvariadic_nil,typename T27=OFvariadic_nil,typename T28=OFvariadic_nil,typename T29=OFvariadic_nil,typename T30=OFvariadic_nil,typename T31=OFvariadic_nil,typename T32=OFvariadic_nil,typename T33=OFvariadic_nil,typename T34=OFvariadic_nil,typename T35=OFvariadic_nil,typename T36=OFvariadic_nil,typename T37=OFvariadic_nil,typename T38=OFvariadic_nil,typename T39=OFvariadic_nil,typename T40=OFvariadic_nil,typename T41=OFvariadic_nil,typename T42=OFvariadic_nil,typename T43=OFvariadic_nil,typename T44=OFvariadic_nil,typename T45=OFvariadic_nil,typename T46=OFvariadic_nil,typename T47=OFvariadic_nil,typename T48=OFvariadic_nil,typename T49=OFvariadic_nil>
struct OFvariadic_parameter_pack_sizeof
: OFintegral_constant<size_t,OFvariadic_parameter_pack_sizeof<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31,T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47,T48,T49>::value+1> {};

template<>
struct OFvariadic_parameter_pack_sizeof<>
: OFintegral_constant<size_t,0> {};

template<size_t Index,typename T0=OFvariadic_nil,typename T1=OFvariadic_nil,typename T2=OFvariadic_nil,typename T3=OFvariadic_nil,typename T4=OFvariadic_nil,typename T5=OFvariadic_nil,typename T6=OFvariadic_nil,typename T7=OFvariadic_nil,typename T8=OFvariadic_nil,typename T9=OFvariadic_nil,typename T10=OFvariadic_nil,typename T11=OFvariadic_nil,typename T12=OFvariadic_nil,typename T13=OFvariadic_nil,typename T14=OFvariadic_nil,typename T15=OFvariadic_nil,typename T16=OFvariadic_nil,typename T17=OFvariadic_nil,typename T18=OFvariadic_nil,typename T19=OFvariadic_nil,typename T20=OFvariadic_nil,typename T21=OFvariadic_nil,typename T22=OFvariadic_nil,typename T23=OFvariadic_nil,typename T24=OFvariadic_nil,typename T25=OFvariadic_nil,typename T26=OFvariadic_nil,typename T27=OFvariadic_nil,typename T28=OFvariadic_nil,typename T29=OFvariadic_nil,typename T30=OFvariadic_nil,typename T31=OFvariadic_nil,typename T32=OFvariadic_nil,typename T33=OFvariadic_nil,typename T34=OFvariadic_nil,typename T35=OFvariadic_nil,typename T36=OFvariadic_nil,typename T37=OFvariadic_nil,typename T38=OFvariadic_nil,typename T39=OFvariadic_nil,typename T40=OFvariadic_nil,typename T41=OFvariadic_nil,typename T42=OFvariadic_nil,typename T43=OFvariadic_nil,typename T44=OFvariadic_nil,typename T45=OFvariadic_nil,typename T46=OFvariadic_nil,typename T47=OFvariadic_nil,typename T48=OFvariadic_nil,typename T49=OFvariadic_nil>
struct OFvariadic_nth_type
: OFvariadic_nth_type<Index-1,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31,T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47,T48,T49> {};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename T16,typename T17,typename T18,typename T19,typename T20,typename T21,typename T22,typename T23,typename T24,typename T25,typename T26,typename T27,typename T28,typename T29,typename T30,typename T31,typename T32,typename T33,typename T34,typename T35,typename T36,typename T37,typename T38,typename T39,typename T40,typename T41,typename T42,typename T43,typename T44,typename T45,typename T46,typename T47,typename T48,typename T49>
struct OFvariadic_nth_type<0,T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31,T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47,T48,T49>
{ typedef T0 type; };

template<size_t Index,typename T,typename T0=OFvariadic_nil,typename T1=OFvariadic_nil,typename T2=OFvariadic_nil,typename T3=OFvariadic_nil,typename T4=OFvariadic_nil,typename T5=OFvariadic_nil,typename T6=OFvariadic_nil,typename T7=OFvariadic_nil,typename T8=OFvariadic_nil,typename T9=OFvariadic_nil,typename T10=OFvariadic_nil,typename T11=OFvariadic_nil,typename T12=OFvariadic_nil,typename T13=OFvariadic_nil,typename T14=OFvariadic_nil,typename T15=OFvariadic_nil,typename T16=OFvariadic_nil,typename T17=OFvariadic_nil,typename T18=OFvariadic_nil,typename T19=OFvariadic_nil,typename T20=OFvariadic_nil,typename T21=OFvariadic_nil,typename T22=OFvariadic_nil,typename T23=OFvariadic_nil,typename T24=OFvariadic_nil,typename T25=OFvariadic_nil,typename T26=OFvariadic_nil,typename T27=OFvariadic_nil,typename T28=OFvariadic_nil,typename T29=OFvariadic_nil,typename T30=OFvariadic_nil,typename T31=OFvariadic_nil,typename T32=OFvariadic_nil,typename T33=OFvariadic_nil,typename T34=OFvariadic_nil,typename T35=OFvariadic_nil,typename T36=OFvariadic_nil,typename T37=OFvariadic_nil,typename T38=OFvariadic_nil,typename T39=OFvariadic_nil,typename T40=OFvariadic_nil,typename T41=OFvariadic_nil,typename T42=OFvariadic_nil,typename T43=OFvariadic_nil,typename T44=OFvariadic_nil,typename T45=OFvariadic_nil,typename T46=OFvariadic_nil,typename T47=OFvariadic_nil,typename T48=OFvariadic_nil,typename T49=OFvariadic_nil>
struct OFvariadic_find_type_t
: OFvariadic_find_type_t<Index+1,T,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31,T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47,T48,T49> {};

template<size_t Index,typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename T16,typename T17,typename T18,typename T19,typename T20,typename T21,typename T22,typename T23,typename T24,typename T25,typename T26,typename T27,typename T28,typename T29,typename T30,typename T31,typename T32,typename T33,typename T34,typename T35,typename T36,typename T37,typename T38,typename T39,typename T40,typename T41,typename T42,typename T43,typename T44,typename T45,typename T46,typename T47,typename T48,typename T49>
struct OFvariadic_find_type_t<Index,T0,T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31,T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47,T48,T49>
: OFintegral_constant<size_t,Index> {};

template<size_t Index,typename T>
struct OFvariadic_find_type_t<Index,T>
: OFintegral_constant<size_t,~OFstatic_cast(size_t,0)> {};

template<typename T,typename T0=OFvariadic_nil,typename T1=OFvariadic_nil,typename T2=OFvariadic_nil,typename T3=OFvariadic_nil,typename T4=OFvariadic_nil,typename T5=OFvariadic_nil,typename T6=OFvariadic_nil,typename T7=OFvariadic_nil,typename T8=OFvariadic_nil,typename T9=OFvariadic_nil,typename T10=OFvariadic_nil,typename T11=OFvariadic_nil,typename T12=OFvariadic_nil,typename T13=OFvariadic_nil,typename T14=OFvariadic_nil,typename T15=OFvariadic_nil,typename T16=OFvariadic_nil,typename T17=OFvariadic_nil,typename T18=OFvariadic_nil,typename T19=OFvariadic_nil,typename T20=OFvariadic_nil,typename T21=OFvariadic_nil,typename T22=OFvariadic_nil,typename T23=OFvariadic_nil,typename T24=OFvariadic_nil,typename T25=OFvariadic_nil,typename T26=OFvariadic_nil,typename T27=OFvariadic_nil,typename T28=OFvariadic_nil,typename T29=OFvariadic_nil,typename T30=OFvariadic_nil,typename T31=OFvariadic_nil,typename T32=OFvariadic_nil,typename T33=OFvariadic_nil,typename T34=OFvariadic_nil,typename T35=OFvariadic_nil,typename T36=OFvariadic_nil,typename T37=OFvariadic_nil,typename T38=OFvariadic_nil,typename T39=OFvariadic_nil,typename T40=OFvariadic_nil,typename T41=OFvariadic_nil,typename T42=OFvariadic_nil,typename T43=OFvariadic_nil,typename T44=OFvariadic_nil,typename T45=OFvariadic_nil,typename T46=OFvariadic_nil,typename T47=OFvariadic_nil,typename T48=OFvariadic_nil,typename T49=OFvariadic_nil>
struct OFvariadic_find_type
: OFintegral_constant<size_t,OFvariadic_find_type_t<0,T,T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31,T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47,T48,T49>::value> {};

template<template<typename L,typename R> class Accumulator,typename T0=OFvariadic_nil,typename T1=OFvariadic_nil,typename T2=OFvariadic_nil,typename T3=OFvariadic_nil,typename T4=OFvariadic_nil,typename T5=OFvariadic_nil,typename T6=OFvariadic_nil,typename T7=OFvariadic_nil,typename T8=OFvariadic_nil,typename T9=OFvariadic_nil,typename T10=OFvariadic_nil,typename T11=OFvariadic_nil,typename T12=OFvariadic_nil,typename T13=OFvariadic_nil,typename T14=OFvariadic_nil,typename T15=OFvariadic_nil,typename T16=OFvariadic_nil,typename T17=OFvariadic_nil,typename T18=OFvariadic_nil,typename T19=OFvariadic_nil,typename T20=OFvariadic_nil,typename T21=OFvariadic_nil,typename T22=OFvariadic_nil,typename T23=OFvariadic_nil,typename T24=OFvariadic_nil,typename T25=OFvariadic_nil,typename T26=OFvariadic_nil,typename T27=OFvariadic_nil,typename T28=OFvariadic_nil,typename T29=OFvariadic_nil,typename T30=OFvariadic_nil,typename T31=OFvariadic_nil,typename T32=OFvariadic_nil,typename T33=OFvariadic_nil,typename T34=OFvariadic_nil,typename T35=OFvariadic_nil,typename T36=OFvariadic_nil,typename T37=OFvariadic_nil,typename T38=OFvariadic_nil,typename T39=OFvariadic_nil,typename T40=OFvariadic_nil,typename T41=OFvariadic_nil,typename T42=OFvariadic_nil,typename T43=OFvariadic_nil,typename T44=OFvariadic_nil,typename T45=OFvariadic_nil,typename T46=OFvariadic_nil,typename T47=OFvariadic_nil,typename T48=OFvariadic_nil,typename T49=OFvariadic_nil>
struct OFfold
: OFfold<Accumulator,typename Accumulator<T0,T1>::type,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31,T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47,T48,T49> {};

template<template<typename L,typename R> class Accumulator,typename T0>
struct OFfold<Accumulator,T0> : T0 { typedef T0 type; };

template<template<typename L,typename R> class Accumulator>
struct OFfold<Accumulator> {};

template<typename L,typename R>
struct OFmax_sizeof
: OFintegral_constant<size_t,(sizeof(L) > sizeof(R) ? sizeof(L) : sizeof(R))> {};

template<size_t L,typename R>
struct OFmax_sizeof<OFintegral_constant<size_t,L>,R>
: OFintegral_constant<size_t,(L > sizeof(R) ? L : sizeof(R))> {};

#ifdef OFalignof
template<typename L,typename R>
struct OFmax_alignof
: OFintegral_constant<size_t,(OFalignof(L) > OFalignof(R) ? OFalignof(L) : OFalignof(R))> {};

template<size_t L,typename R>
struct OFmax_alignof<OFintegral_constant<size_t,L>,R>
: OFintegral_constant<size_t,(L > OFalignof(R) ? L : OFalignof(R))> {};
#endif // OFalignof

#endif // VARIADIC_HELPERS_H
