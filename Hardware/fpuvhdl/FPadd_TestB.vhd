--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:57:01 11/03/2014
-- Design Name:   
-- Module Name:   /home/alonso/xilinxdev/fpuvhdl/FPadd_TestB.vhd
-- Project Name:  fpuvhdl
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FPadd
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY FPadd_TestB IS
END FPadd_TestB;
 
ARCHITECTURE behavior OF FPadd_TestB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FPadd
    PORT(
         ADD_SUB : IN  std_logic;
         FP_A : IN  std_logic_vector(31 downto 0);
         FP_B : IN  std_logic_vector(31 downto 0);
         clk : IN  std_logic;
         FP_Z : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ADD_SUB : std_logic := '0';
   signal FP_A : std_logic_vector(31 downto 0) := (others => '0');
   signal FP_B : std_logic_vector(31 downto 0) := (others => '0');
   signal clk : std_logic := '0';

 	--Outputs
   signal FP_Z : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FPadd PORT MAP (
          ADD_SUB => ADD_SUB,
          FP_A => FP_A,
          FP_B => FP_B,
          clk => clk,
          FP_Z => FP_Z
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
      wait for clk_period*10;
      -- insert stimulus here 
		FP_A<="00000001100000000000000000000111";
		FP_B<="00000001100000000000000000000001";
      wait;
   end process;

END;
