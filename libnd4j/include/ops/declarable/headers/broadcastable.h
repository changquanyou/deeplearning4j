//
//  @author raver119@gmail.com
//

#ifndef LIBND4J_HEADERS_BROADCASTABLE_H
#define LIBND4J_HEADERS_BROADCASTABLE_H

#include <ops/declarable/headers/common.h>
#include <ops/declarable/generic/helpers/BroadcastHelper.h>

namespace nd4j {
    namespace ops {
        // TODO: make broadcastables separate class

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Max(X, Y)
         */
        #if NOT_EXCLUDED(OP_maximum)
        DECLARE_CUSTOM_OP(maximum, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(maximum_bp, 3, 2, false, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Min(X, Y)
         */
        #if NOT_EXCLUDED(OP_minimum)
        DECLARE_CUSTOM_OP(minimum, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(minimum_bp, 3, 2, false, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Add(X, Y)
         */
        #if NOT_EXCLUDED(OP_add)
        DECLARE_CUSTOM_OP(add, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(add_bp, 3, 2, false, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Subtract(X, Y)
         */
        #if NOT_EXCLUDED(OP_subtract)
        DECLARE_CUSTOM_OP(subtract, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(subtract_bp, 3, 2, false, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Subtract(Y, X)
         */
        #if NOT_EXCLUDED(OP_reversesubtract)
        DECLARE_CUSTOM_OP(reversesubtract, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(reversesubtract_bp, 3, 2, false, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = ReverseMod(X, Y) == Mod(Y, X)
         */
        #if NOT_EXCLUDED(OP_reversemod)
        DECLARE_CUSTOM_OP(reversemod, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(reversemod_bp, 3, 2, true, 0, 0);
        #endif


        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Subtract(X, Y) * Subtract(X, Y)
         */
        #if NOT_EXCLUDED(OP_squaredsubtract)
        DECLARE_CUSTOM_OP(squaredsubtract, 2, 1, true, 0, 0)
        DECLARE_CUSTOM_OP(squaredsubtract_bp, 3, 2, false, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Multiply(X, Y)
         */
        #if NOT_EXCLUDED(OP_multiply)
        DECLARE_CUSTOM_OP(multiply, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(multiply_bp, 3, 2, false, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Divide(X, Y)
         */
        #if NOT_EXCLUDED(OP_divide)
        DECLARE_CUSTOM_OP(divide, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(divide_bp, 3, 2, false, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Divide(Y, x)
         */
        #if NOT_EXCLUDED(OP_reversedivide)
        DECLARE_CUSTOM_OP(reversedivide, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(reversedivide_bp, 3, 2, false, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = FloorMod(X, Y)
         */
        #if NOT_EXCLUDED(OP_floormod)
        DECLARE_CUSTOM_OP(floormod, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(floormod_bp, 3, 2, true, 0, 0);
        #endif

        #if NOT_EXCLUDED(OP_mod)
        DECLARE_CUSTOM_OP(mod, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(mod_bp, 3, 2, true, 0, 0);
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = FloorDiv(X, Y)
         */
        #if NOT_EXCLUDED(OP_floordiv)
        DECLARE_CUSTOM_OP(floordiv, 2, 1, true, 0, 0)
        DECLARE_CUSTOM_OP(floordiv_bp, 2, 1, true, 0, 0)
        #endif

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Divide(X, Y)
         */
        #if NOT_EXCLUDED(OP_realdiv)
        DECLARE_CUSTOM_OP(realdiv, 2, 1, true, 0, 0);
        DECLARE_CUSTOM_OP(realdiv_bp, 3, 2, false, 0, 0);
        #endif


        /**
         *
         *
         * @tparam T
         */
        DECLARE_CUSTOM_OP(truncatediv, 2, 1, true, 0, 0);

        /**
         * This is one of auto-broadcastable operations. It accepts 2 operands, and operation is applied based on their shapes:
         * 1) if shapes are equal that's pairwise operation, result will have the same shape.
         * 2) if shape X is scalar and shape Y is array - result will have shape equal to Y.
         * 3) if shape X is array and shape Y is scalar - result will have shape equal to X.
         * 4) if shape X and Y are both arrays, but shapes aren't equal - result shape will be broadcast result.
         * 
         * This operation returns Z = Assign(X, Y)
         */
        #if NOT_EXCLUDED(OP_assign)
        DECLARE_CUSTOM_OP(assign, 2, 1, false, 0, 0);
        DECLARE_CUSTOM_OP(assign_bp, 3, 2, false, 0, 0);
        #endif

        #if NOT_EXCLUDED(OP_meshgrid)
        DECLARE_CUSTOM_OP(meshgrid, -1, -1, false, 0, 0);
        #endif

         /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x == _y ? (T) 1.0f : (T) 0.0f;
         *
         */
        #if NOT_EXCLUDED(OP_equals)
        DECLARE_CUSTOM_OP(equals, 2, 1, true, 0, 0);
        #endif

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x != _y ? (T) 1.0f : (T) 0.0f;
         */
        #if NOT_EXCLUDED(OP_not_equals)
        DECLARE_CUSTOM_OP(not_equals, 2, 1, true, 0, 0);
        #endif

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x <= _y ? (T) 1.0f : (T) 0.0f;
         */
        #if NOT_EXCLUDED(OP_less_equal)
        DECLARE_CUSTOM_OP(less_equal, 2, 1, true, 0, 0);
        #endif

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x >= _y ? (T) 1.0f : (T) 0.0f;
         */
        #if NOT_EXCLUDED(OP_greater_equal)
        DECLARE_CUSTOM_OP(greater_equal, 2, 1, true, 0, 0);
        #endif

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x < _y ? (T) 1.0f : (T) 0.0f;
         */
        #if NOT_EXCLUDED(OP_less)
        DECLARE_CUSTOM_OP(less, 2, 1, true, 0, 0);
        #endif

        /**
         * This op takes 2 equally shaped arrays as input, and provides binary matrix as output.
         * Math is: _x > _y ? (T) 1.0f : (T) 0.0f;
         */
        #if NOT_EXCLUDED(OP_greater)
        DECLARE_CUSTOM_OP(greater, 2, 1, true, 0, 0);
        #endif

        /**
         * This operation performs calculation of percentile of input array along given axises
         *
         * Input - tensor with rank N > 0
         * Output - tensor with rank (N - length(axis)) or scalar if number of Integer arguments is zero
         * Float arguments:
         *   0: percentile (scalar) in range [0,100] (inclusively)
         *   1: interpolation (optional), possible values are 0-"lower", 1-"higher", 2-"nearest"(default)
         *   2: keepDims (optional), if it is non zero, then unities are kept in reduced resulting shape of output array, default is 0
         * Integer arguments - axis - the sequence of axises to calculate percentile along, if sequence is empty then calculate percentile for whole input tensor and return result as scalar
         * 
         */
        #if NOT_EXCLUDED(OP_percentile)
        DECLARE_CUSTOM_OP(percentile, 1, 1, false, 1, -2);
        #endif


    }
}

#endif