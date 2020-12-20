#include "Polinom.h"
#include <gtest.h>

TEST(Polinom, can_create_polinomial)
{
    ASSERT_NO_THROW(TPolinom P1);
    ASSERT_NO_THROW(TPolinom P2);
    ASSERT_NO_THROW(TPolinom P3);
}

TEST(Polinom, can_copy_polinomial)
{
    TPolinom P1;

    ASSERT_NO_THROW(TPolinom P2(P1));
}

TEST(Polinom, operator_plus_equally)
{
    TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
    TPolinom P1;

    ASSERT_NO_THROW(P1 += a);
}

TEST(Polinom, operator_multiplication)
{
    TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
    TMonom b(new double[3]{ 2, 2, 1 }, 1, 1);
    TPolinom P1, P2, P3;
    P1 += a;
    P2 += b;

    ASSERT_NO_THROW(P1 * P2);
}

TEST(Polinom, operator_plus)
{
    TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
    TMonom b(new double[3]{ 2, 2, 1 }, 1, 1);
    TPolinom P1, P2, P3;
    P1 += a;
    P2 += b;

    ASSERT_NO_THROW(P2 + P1);
}

TEST(Polinom, operator_minus)
{
    TMonom a(new double[3]{ 2, 2, 1 }, 1, 1);
    TMonom b(new double[3]{ 2, 2, 1 }, 1, 1);
    TPolinom P1, P2, P3;
    P1 += a;
    P2 += b;

    ASSERT_NO_THROW(P2 - P1);
}