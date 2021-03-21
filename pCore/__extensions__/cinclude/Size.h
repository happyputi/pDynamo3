/*==================================================================================================================================
! . The size type.
!=================================================================================================================================*/
# ifndef _SIZE
# define _SIZE

# include <stddef.h>
# include <stdint.h>

/*----------------------------------------------------------------------------------------------------------------------------------
! . Definitions.
!---------------------------------------------------------------------------------------------------------------------------------*/
/* . Type. */
typedef size_t Size ;

/* . Largest and smallest values. */
# define Size_Largest  SIZE_MAX
# define Size_Smallest 0

/* . Conversion factors from Size to bits and bytes. */
# define _SizeToBits  8
# define _SizeToBytes 1

/*----------------------------------------------------------------------------------------------------------------------------------
! . Macros.
!---------------------------------------------------------------------------------------------------------------------------------*/
/* . The sizeof function. */
# define SizeOf( self ) sizeof ( self )

/* . Bit and byte sizes. */
# define BitSizeOf(  self ) ( _SizeToBits  * SizeOf ( self ) )
# define ByteSizeOf( self ) ( _SizeToBytes * SizeOf ( self ) )

# endif
