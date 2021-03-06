/*
 * Copyright (c) 2012 bwgz.org
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef _BEAGLEBONE_H
#define _BEAGLEBONE_H

#define AIN0		(1)
#define AIN1		(2)
#define AIN2		(3)
#define AIN3		(4)
#define AIN4		(5)
#define AIN5		(6)
#define AIN6		(7)
#define AIN7		(8)

/*
 * Not all of the following GPIO signal names are available.
 */
#define GPIO0_0		((0 * 32) + 0)
#define GPIO0_1		((0 * 32) + 1)
#define GPIO0_2		((0 * 32) + 2)
#define GPIO0_3		((0 * 32) + 3)
#define GPIO0_4		((0 * 32) + 4)
#define GPIO0_5		((0 * 32) + 5)
#define GPIO0_6		((0 * 32) + 6)
#define GPIO0_7		((0 * 32) + 7)
#define GPIO0_8		((0 * 32) + 8)
#define GPIO0_9		((0 * 32) + 9)
#define GPIO0_10	((0 * 32) + 10)
#define GPIO0_11	((0 * 32) + 11)
#define GPIO0_12	((0 * 32) + 12)
#define GPIO0_13	((0 * 32) + 13)
#define GPIO0_14	((0 * 32) + 14)
#define GPIO0_15	((0 * 32) + 15)
#define GPIO0_16	((0 * 32) + 16)
#define GPIO0_17	((0 * 32) + 17)
#define GPIO0_18	((0 * 32) + 18)
#define GPIO0_19	((0 * 32) + 19)
#define GPIO0_20	((0 * 32) + 20)
#define GPIO0_21	((0 * 32) + 21)
#define GPIO0_22	((0 * 32) + 22)
#define GPIO0_23	((0 * 32) + 23)
#define GPIO0_24	((0 * 32) + 24)
#define GPIO0_25	((0 * 32) + 25)
#define GPIO0_26	((0 * 32) + 26)
#define GPIO0_27	((0 * 32) + 27)
#define GPIO0_28	((0 * 32) + 28)
#define GPIO0_29	((0 * 32) + 29)
#define GPIO0_30	((0 * 32) + 30)
#define GPIO0_31	((0 * 32) + 31)
#define GPIO1_0		((1 * 32) + 0)
#define GPIO1_1		((1 * 32) + 1)
#define GPIO1_2		((1 * 32) + 2)
#define GPIO1_3		((1 * 32) + 3)
#define GPIO1_4		((1 * 32) + 4)
#define GPIO1_5		((1 * 32) + 5)
#define GPIO1_6		((1 * 32) + 6)
#define GPIO1_7		((1 * 32) + 7)
#define GPIO1_8		((1 * 32) + 8)
#define GPIO1_9		((1 * 32) + 9)
#define GPIO1_10	((1 * 32) + 10)
#define GPIO1_11	((1 * 32) + 11)
#define GPIO1_12	((1 * 32) + 12)
#define GPIO1_13	((1 * 32) + 13)
#define GPIO1_14	((1 * 32) + 14)
#define GPIO1_15	((1 * 32) + 15)
#define GPIO1_16	((1 * 32) + 16)
#define GPIO1_17	((1 * 32) + 17)
#define GPIO1_18	((1 * 32) + 18)
#define GPIO1_19	((1 * 32) + 19)
#define GPIO1_20	((1 * 32) + 20)
#define GPIO1_21	((1 * 32) + 21)
#define GPIO1_22	((1 * 32) + 22)
#define GPIO1_23	((1 * 32) + 23)
#define GPIO1_24	((1 * 32) + 24)
#define GPIO1_25	((1 * 32) + 25)
#define GPIO1_26	((1 * 32) + 26)
#define GPIO1_27	((1 * 32) + 27)
#define GPIO1_28	((1 * 32) + 28)
#define GPIO1_29	((1 * 32) + 29)
#define GPIO1_30	((1 * 32) + 30)
#define GPIO1_31	((1 * 32) + 31)
#define GPIO2_0		((2 * 32) + 0)
#define GPIO2_1		((2 * 32) + 1)
#define GPIO2_2		((2 * 32) + 2)
#define GPIO2_3		((2 * 32) + 3)
#define GPIO2_4		((2 * 32) + 4)
#define GPIO2_5		((2 * 32) + 5)
#define GPIO2_6		((2 * 32) + 6)
#define GPIO2_7		((2 * 32) + 7)
#define GPIO2_8		((2 * 32) + 8)
#define GPIO2_9		((2 * 32) + 9)
#define GPIO2_10	((2 * 32) + 10)
#define GPIO2_11	((2 * 32) + 11)
#define GPIO2_12	((2 * 32) + 12)
#define GPIO2_13	((2 * 32) + 13)
#define GPIO2_14	((2 * 32) + 14)
#define GPIO2_15	((2 * 32) + 15)
#define GPIO2_16	((2 * 32) + 16)
#define GPIO2_17	((2 * 32) + 17)
#define GPIO2_18	((2 * 32) + 18)
#define GPIO2_19	((2 * 32) + 19)
#define GPIO2_20	((2 * 32) + 20)
#define GPIO2_21	((2 * 32) + 21)
#define GPIO2_22	((2 * 32) + 22)
#define GPIO2_23	((2 * 32) + 23)
#define GPIO2_24	((2 * 32) + 24)
#define GPIO2_25	((2 * 32) + 25)
#define GPIO2_26	((2 * 32) + 26)
#define GPIO2_27	((2 * 32) + 27)
#define GPIO2_28	((2 * 32) + 28)
#define GPIO2_29	((2 * 32) + 29)
#define GPIO2_30	((2 * 32) + 30)
#define GPIO2_31	((2 * 32) + 31)
#define GPIO3_0		((3 * 32) + 0)
#define GPIO3_1		((3 * 32) + 1)
#define GPIO3_2		((3 * 32) + 2)
#define GPIO3_3		((3 * 32) + 3)
#define GPIO3_4		((3 * 32) + 4)
#define GPIO3_5		((3 * 32) + 5)
#define GPIO3_6		((3 * 32) + 6)
#define GPIO3_7		((3 * 32) + 7)
#define GPIO3_8		((3 * 32) + 8)
#define GPIO3_9		((3 * 32) + 9)
#define GPIO3_10	((3 * 32) + 10)
#define GPIO3_11	((3 * 32) + 11)
#define GPIO3_12	((3 * 32) + 12)
#define GPIO3_13	((3 * 32) + 13)
#define GPIO3_14	((3 * 32) + 14)
#define GPIO3_15	((3 * 32) + 15)
#define GPIO3_16	((3 * 32) + 16)
#define GPIO3_17	((3 * 32) + 17)
#define GPIO3_18	((3 * 32) + 18)
#define GPIO3_19	((3 * 32) + 19)
#define GPIO3_20	((3 * 32) + 20)
#define GPIO3_21	((3 * 32) + 21)
#define GPIO3_22	((3 * 32) + 22)
#define GPIO3_23	((3 * 32) + 23)
#define GPIO3_24	((3 * 32) + 24)
#define GPIO3_25	((3 * 32) + 25)
#define GPIO3_26	((3 * 32) + 26)
#define GPIO3_27	((3 * 32) + 27)
#define GPIO3_28	((3 * 32) + 28)
#define GPIO3_29	((3 * 32) + 29)
#define GPIO3_30	((3 * 32) + 30)
#define GPIO3_31	((3 * 32) + 31)

#endif
