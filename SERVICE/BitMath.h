 /******************************************************************************
 *
 * File Name: BitMath.h
 *
 * Description: Commonly used Macros and bitwise funcitons
 *
 * Author: Mohamed Youssef
 *
 * Date : 19/3/2024
 *
 *******************************************************************************/



#ifndef BitMath_h
#define BitMath_h




/*Used to set a specific bit, accepts Any register in REG, and the number of desired bit in BIT*/
#define SET_BIT( REG , BIT ) (  ( REG )  |=  ( 1 << ( BIT ) ) )


/*Used to clear a specific bit, accepts Any register in REG, and the number of desired bit in BIT*/
#define CLR_BIT( REG , BIT ) (  ( REG )  &=  ~( 1 << ( BIT ) ) )



/*Used to Toggle a specific bit, accepts Any register in REG, and the number of desired bit in BIT*/
#define TOG_BIT( REG , BIT ) (  ( REG )  ^=  ( 1 << ( BIT ) ) )


/*Used to check if a specific bit is set, accepts Any register in REG, and the number of desired bit in BIT*/
/*Return Non-zero value if set                 Returns 0 if not set*/
#define IS_BIT_SET( REG , BIT )  ( ( REG ) & ( 1 << ( BIT ) ) )



/*Used to check if a specific bit is clear, accepts Any register in REG, and the number of desired bit in BIT*/
/*Return 1 if Clear                 Returns 0 If not clear*/
#define IS_BIT_CLR( REG , BIT ) ( ! ( ( REG ) & ( 1 << ( BIT ) ) ) )




#endif