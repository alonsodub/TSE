------------------------------------------------------------------------------
-- user_logic.vhd - entity/architecture pair
------------------------------------------------------------------------------
--
-- ***************************************************************************
-- ** Copyright (c) 1995-2008 Xilinx, Inc.  All rights reserved.            **
-- **                                                                       **
-- ** Xilinx, Inc.                                                          **
-- ** XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS"         **
-- ** AS A COURTESY TO YOU, SOLELY FOR USE IN DEVELOPING PROGRAMS AND       **
-- ** SOLUTIONS FOR XILINX DEVICES.  BY PROVIDING THIS DESIGN, CODE,        **
-- ** OR INFORMATION AS ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE,        **
-- ** APPLICATION OR STANDARD, XILINX IS MAKING NO REPRESENTATION           **
-- ** THAT THIS IMPLEMENTATION IS FREE FROM ANY CLAIMS OF INFRINGEMENT,     **
-- ** AND YOU ARE RESPONSIBLE FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE      **
-- ** FOR YOUR IMPLEMENTATION.  XILINX EXPRESSLY DISCLAIMS ANY              **
-- ** WARRANTY WHATSOEVER WITH RESPECT TO THE ADEQUACY OF THE               **
-- ** IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OR        **
-- ** REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM CLAIMS OF       **
-- ** INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS       **
-- ** FOR A PARTICULAR PURPOSE.                                             **
-- **                                                                       **
-- ***************************************************************************
--
------------------------------------------------------------------------------
-- Filename:          user_logic.vhd
-- Version:           1.00.a
-- Description:       User logic.
-- Date:              Sun Nov 30 17:33:41 2014 (by Create and Import Peripheral Wizard)
-- VHDL Standard:     VHDL'93
------------------------------------------------------------------------------
-- Naming Conventions:
--   active low signals:                    "*_n"
--   clock signals:                         "clk", "clk_div#", "clk_#x"
--   reset signals:                         "rst", "rst_n"
--   generics:                              "C_*"
--   user defined types:                    "*_TYPE"
--   state machine next state:              "*_ns"
--   state machine current state:           "*_cs"
--   combinatorial signals:                 "*_com"
--   pipelined or register delay signals:   "*_d#"
--   counter signals:                       "*cnt*"
--   clock enable signals:                  "*_ce"
--   internal version of output port:       "*_i"
--   device pins:                           "*_pin"
--   ports:                                 "- Names begin with Uppercase"
--   processes:                             "*_PROCESS"
--   component instantiations:              "<ENTITY_>I_<#|FUNC>"
------------------------------------------------------------------------------

-- DO NOT EDIT BELOW THIS LINE --------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

library proc_common_v2_00_a;
use proc_common_v2_00_a.proc_common_pkg.all;

-- DO NOT EDIT ABOVE THIS LINE --------------------

--USER libraries added here

------------------------------------------------------------------------------
-- Entity section
------------------------------------------------------------------------------
-- Definition of Generics:
--   C_SLV_DWIDTH                 -- Slave interface data bus width
--   C_NUM_REG                    -- Number of software accessible registers
--   C_RDFIFO_DEPTH               -- Read FIFO depth
--   C_WRFIFO_DEPTH               -- Write FIFO depth
--
-- Definition of Ports:
--   Bus2IP_Clk                   -- Bus to IP clock
--   Bus2IP_Reset                 -- Bus to IP reset
--   Bus2IP_Data                  -- Bus to IP data bus
--   Bus2IP_BE                    -- Bus to IP byte enables
--   Bus2IP_RdCE                  -- Bus to IP read chip enable
--   Bus2IP_WrCE                  -- Bus to IP write chip enable
--   IP2Bus_Data                  -- IP to Bus data bus
--   IP2Bus_RdAck                 -- IP to Bus read transfer acknowledgement
--   IP2Bus_WrAck                 -- IP to Bus write transfer acknowledgement
--   IP2Bus_Error                 -- IP to Bus error response
--   IP2RFIFO_WrReq               -- IP to RFIFO : IP write request
--   IP2RFIFO_Data                -- IP to RFIFO : IP write data bus
--   IP2RFIFO_WrMark              -- IP to RFIFO : mark beginning of packet being written
--   IP2RFIFO_WrRelease           -- IP to RFIFO : return RFIFO to normal FIFO operation
--   IP2RFIFO_WrRestore           -- IP to RFIFO : restore the RFIFO to the last packet mark
--   RFIFO2IP_WrAck               -- RFIFO to IP : RFIFO write acknowledge
--   RFIFO2IP_AlmostFull          -- RFIFO to IP : RFIFO almost full
--   RFIFO2IP_Full                -- RFIFO to IP : RFIFO full
--   RFIFO2IP_Vacancy             -- RFIFO to IP : RFIFO vacancy
--   IP2WFIFO_RdReq               -- IP to WFIFO : IP read request
--   IP2WFIFO_RdMark              -- IP to WFIFO : mark beginning of packet being read
--   IP2WFIFO_RdRelease           -- IP to WFIFO : return WFIFO to normal FIFO operation
--   IP2WFIFO_RdRestore           -- IP to WFIFO : restore the WFIFO to the last packet mark
--   WFIFO2IP_Data                -- WFIFO to IP : WFIFO read data
--   WFIFO2IP_RdAck               -- WFIFO to IP : WFIFO read acknowledge
--   WFIFO2IP_AlmostEmpty         -- WFIFO to IP : WFIFO almost empty
--   WFIFO2IP_Empty               -- WFIFO to IP : WFIFO empty
--   WFIFO2IP_Occupancy           -- WFIFO to IP : WFIFO occupancy
------------------------------------------------------------------------------

entity user_logic is
  generic
  (
    -- ADD USER GENERICS BELOW THIS LINE ---------------
    --USER generics added here
    -- ADD USER GENERICS ABOVE THIS LINE ---------------

    -- DO NOT EDIT BELOW THIS LINE ---------------------
    -- Bus protocol parameters, do not add to or delete
    C_SLV_DWIDTH                   : integer              := 32;
    C_NUM_REG                      : integer              := 1;
    C_RDFIFO_DEPTH                 : integer              := 512;
    C_WRFIFO_DEPTH                 : integer              := 512
    -- DO NOT EDIT ABOVE THIS LINE ---------------------
  );
  port
  (
    -- ADD USER PORTS BELOW THIS LINE ------------------
    --USER ports added here
    -- ADD USER PORTS ABOVE THIS LINE ------------------

    -- DO NOT EDIT BELOW THIS LINE ---------------------
    -- Bus protocol ports, do not add to or delete
    Bus2IP_Clk                     : in  std_logic;
    Bus2IP_Reset                   : in  std_logic;
    Bus2IP_Data                    : in  std_logic_vector(0 to C_SLV_DWIDTH-1);
    Bus2IP_BE                      : in  std_logic_vector(0 to C_SLV_DWIDTH/8-1);
    Bus2IP_RdCE                    : in  std_logic_vector(0 to C_NUM_REG-1);
    Bus2IP_WrCE                    : in  std_logic_vector(0 to C_NUM_REG-1);
    IP2Bus_Data                    : out std_logic_vector(0 to C_SLV_DWIDTH-1);
    IP2Bus_RdAck                   : out std_logic;
    IP2Bus_WrAck                   : out std_logic;
    IP2Bus_Error                   : out std_logic;
    IP2RFIFO_WrReq                 : out std_logic;
    IP2RFIFO_Data                  : out std_logic_vector(0 to C_SLV_DWIDTH-1);
    IP2RFIFO_WrMark                : out std_logic;
    IP2RFIFO_WrRelease             : out std_logic;
    IP2RFIFO_WrRestore             : out std_logic;
    RFIFO2IP_WrAck                 : in  std_logic;
    RFIFO2IP_AlmostFull            : in  std_logic;
    RFIFO2IP_Full                  : in  std_logic;
    RFIFO2IP_Vacancy               : in  std_logic_vector(0 to log2(C_RDFIFO_DEPTH));
    IP2WFIFO_RdReq                 : out std_logic;
    IP2WFIFO_RdMark                : out std_logic;
    IP2WFIFO_RdRelease             : out std_logic;
    IP2WFIFO_RdRestore             : out std_logic;
    WFIFO2IP_Data                  : in  std_logic_vector(0 to C_SLV_DWIDTH-1);
    WFIFO2IP_RdAck                 : in  std_logic;
    WFIFO2IP_AlmostEmpty           : in  std_logic;
    WFIFO2IP_Empty                 : in  std_logic;
    WFIFO2IP_Occupancy             : in  std_logic_vector(0 to log2(C_WRFIFO_DEPTH))
    -- DO NOT EDIT ABOVE THIS LINE ---------------------
  );

  attribute SIGIS : string;
  attribute SIGIS of Bus2IP_Clk    : signal is "CLK";
  attribute SIGIS of Bus2IP_Reset  : signal is "RST";

end entity user_logic;

------------------------------------------------------------------------------
-- Architecture section
------------------------------------------------------------------------------

architecture IMP of user_logic is

  --USER signal declarations added here, as needed for user logic
  signal ADD_OP		:std_logic := '1'; 
  --Instanciancion de la implementacion del periferico 
  COMPONENT FPADD IS
  PORT( 
     ADD_SUB : IN     std_logic;
     FP_A    : IN     std_logic_vector (31 DOWNTO 0);
     FP_B    : IN     std_logic_vector (31 DOWNTO 0);
     clk     : IN     std_logic;
     FP_Z    : OUT    std_logic_vector (31 DOWNTO 0)
  );END COMPONENT;
  ------------------------------------------
  -- Signals for read/write fifo loopback example
  ------------------------------------------
  type FIFO_CNTL_SM_TYPE is (IDLE, RD_REQ, WR_REQ);
  signal fifo_cntl_ns                   : FIFO_CNTL_SM_TYPE;
  signal fifo_cntl_cs                   : FIFO_CNTL_SM_TYPE;
  signal fifo_rdreq_cmb                 : std_logic;
  signal fifo_wrreq_cmb                 : std_logic;

begin

  --USER logic implementation added here
  FPA_0:FPADD PORT MAP( 
	 ADD_SUB => ADD_OP,
    clk    => Bus2IP_Clk,
    FP_A   => WFIFO2IP_Data(0 to 31),
    FP_B   => WFIFO2IP_Data(0 to 31),
    FP_Z   => IP2RFIFO_Data
   );
  ------------------------------------------
  -- Example code to transfer data between read/write fifo
  -- 
  -- Note:
  -- The example code presented here is to show you one way of operating on
  -- the read/write FIFOs provided for you. There's a set of IPIC ports
  -- dedicated to the FIFO operations, beginning with RFIFO2IP_* or IP2RFIFO_*
  -- or WFIFO2IP_* or IP2WFIFO_*. Some FIFO ports are only available when
  -- certain FIFO services are present, s.t. vacancy calculation, etc.
  -- Typically you will need to have a state machine to read data from the
  -- write FIFO or write data to the read FIFO. This code snippet simply
  -- transfer the data from the write FIFO to the read FIFO.
  ------------------------------------------
  IP2RFIFO_WrMark    <= '0';
  IP2RFIFO_WrRelease <= '0';
  IP2RFIFO_WrRestore <= '0';

  IP2WFIFO_RdMark    <= '0';
  IP2WFIFO_RdRelease <= '0';
  IP2WFIFO_RdRestore <= '0';

  FIFO_CNTL_SM_COMB : process( WFIFO2IP_empty, WFIFO2IP_RdAck, RFIFO2IP_full, RFIFO2IP_WrAck, fifo_cntl_cs ) is
  begin

    -- set defaults
    fifo_rdreq_cmb <= '0';
    fifo_wrreq_cmb <= '0';
    fifo_cntl_ns   <= fifo_cntl_cs;

    case fifo_cntl_cs is
      when IDLE =>
        -- data is available in the write fifo and there's space in the read fifo,
        -- so we can start transfering the data from write fifo to read fifo
        if ( WFIFO2IP_empty = '0' and RFIFO2IP_full = '0' ) then
          fifo_rdreq_cmb <= '1';
          fifo_cntl_ns   <= RD_REQ;
        end if;
      when RD_REQ =>
        -- data has been read from the write fifo,
        -- so we can write it to the read fifo
        if ( WFIFO2IP_RdAck = '1' ) then
          fifo_wrreq_cmb <= '1';
          fifo_cntl_ns   <= WR_REQ;
        end if;
      when WR_REQ =>
        -- data has been written to the read fifo,
        -- so data transfer is done
        if ( RFIFO2IP_WrAck = '1' ) then
          fifo_cntl_ns <= IDLE;
        end if;
      when others =>
        fifo_cntl_ns <= IDLE;
    end case;

  end process FIFO_CNTL_SM_COMB;

  FIFO_CNTL_SM_SEQ : process( Bus2IP_Clk ) is
  begin

    if ( Bus2IP_Clk'event and Bus2IP_Clk = '1' ) then
      if ( Bus2IP_Reset = '1' ) then
        IP2WFIFO_RdReq <= '0';
        IP2RFIFO_WrReq <= '0';
        fifo_cntl_cs   <= IDLE;
      else
        IP2WFIFO_RdReq <= fifo_rdreq_cmb;
        IP2RFIFO_WrReq <= fifo_wrreq_cmb;
        fifo_cntl_cs   <= fifo_cntl_ns;
      end if;
    end if;

  end process FIFO_CNTL_SM_SEQ;

  --IP2RFIFO_Data <= WFIFO2IP_Data;
  --Now the read FIFO will be loaded
  --with data from the FPadd
  ------------------------------------------
  -- Example code to drive IP to Bus signals
  ------------------------------------------
  IP2Bus_Data  <= (others => '0');

  IP2Bus_WrAck <= '0';
  IP2Bus_RdAck <= '0';
  IP2Bus_Error <= '0';

end IMP;
