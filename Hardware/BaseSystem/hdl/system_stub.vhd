-------------------------------------------------------------------------------
-- system_stub.vhd
-------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

entity system_stub is
  port (
    fpga_0_RS232_Uart_1_RX_pin : in std_logic;
    fpga_0_RS232_Uart_1_TX_pin : out std_logic;
    fpga_0_Ethernet_MAC_slew1_pin : out std_logic;
    fpga_0_Ethernet_MAC_slew2_pin : out std_logic;
    fpga_0_Ethernet_MAC_PHY_rst_n_pin : out std_logic;
    fpga_0_Ethernet_MAC_PHY_crs_pin : in std_logic;
    fpga_0_Ethernet_MAC_PHY_col_pin : in std_logic;
    fpga_0_Ethernet_MAC_PHY_tx_data_pin : out std_logic_vector(3 downto 0);
    fpga_0_Ethernet_MAC_PHY_tx_en_pin : out std_logic;
    fpga_0_Ethernet_MAC_PHY_tx_clk_pin : in std_logic;
    fpga_0_Ethernet_MAC_PHY_rx_er_pin : in std_logic;
    fpga_0_Ethernet_MAC_PHY_rx_clk_pin : in std_logic;
    fpga_0_Ethernet_MAC_PHY_dv_pin : in std_logic;
    fpga_0_Ethernet_MAC_PHY_rx_data_pin : in std_logic_vector(3 downto 0);
    fpga_0_net_gnd_pin : out std_logic;
    fpga_0_net_gnd_1_pin : out std_logic;
    fpga_0_net_gnd_2_pin : out std_logic;
    fpga_0_net_gnd_3_pin : out std_logic;
    fpga_0_net_gnd_4_pin : out std_logic;
    fpga_0_net_gnd_5_pin : out std_logic;
    fpga_0_net_gnd_6_pin : out std_logic;
    sys_clk_pin : in std_logic;
    sys_rst_pin : in std_logic
  );
end system_stub;

architecture STRUCTURE of system_stub is

  component system is
    port (
      fpga_0_RS232_Uart_1_RX_pin : in std_logic;
      fpga_0_RS232_Uart_1_TX_pin : out std_logic;
      fpga_0_Ethernet_MAC_slew1_pin : out std_logic;
      fpga_0_Ethernet_MAC_slew2_pin : out std_logic;
      fpga_0_Ethernet_MAC_PHY_rst_n_pin : out std_logic;
      fpga_0_Ethernet_MAC_PHY_crs_pin : in std_logic;
      fpga_0_Ethernet_MAC_PHY_col_pin : in std_logic;
      fpga_0_Ethernet_MAC_PHY_tx_data_pin : out std_logic_vector(3 downto 0);
      fpga_0_Ethernet_MAC_PHY_tx_en_pin : out std_logic;
      fpga_0_Ethernet_MAC_PHY_tx_clk_pin : in std_logic;
      fpga_0_Ethernet_MAC_PHY_rx_er_pin : in std_logic;
      fpga_0_Ethernet_MAC_PHY_rx_clk_pin : in std_logic;
      fpga_0_Ethernet_MAC_PHY_dv_pin : in std_logic;
      fpga_0_Ethernet_MAC_PHY_rx_data_pin : in std_logic_vector(3 downto 0);
      fpga_0_net_gnd_pin : out std_logic;
      fpga_0_net_gnd_1_pin : out std_logic;
      fpga_0_net_gnd_2_pin : out std_logic;
      fpga_0_net_gnd_3_pin : out std_logic;
      fpga_0_net_gnd_4_pin : out std_logic;
      fpga_0_net_gnd_5_pin : out std_logic;
      fpga_0_net_gnd_6_pin : out std_logic;
      sys_clk_pin : in std_logic;
      sys_rst_pin : in std_logic
    );
  end component;

begin

  system_i : system
    port map (
      fpga_0_RS232_Uart_1_RX_pin => fpga_0_RS232_Uart_1_RX_pin,
      fpga_0_RS232_Uart_1_TX_pin => fpga_0_RS232_Uart_1_TX_pin,
      fpga_0_Ethernet_MAC_slew1_pin => fpga_0_Ethernet_MAC_slew1_pin,
      fpga_0_Ethernet_MAC_slew2_pin => fpga_0_Ethernet_MAC_slew2_pin,
      fpga_0_Ethernet_MAC_PHY_rst_n_pin => fpga_0_Ethernet_MAC_PHY_rst_n_pin,
      fpga_0_Ethernet_MAC_PHY_crs_pin => fpga_0_Ethernet_MAC_PHY_crs_pin,
      fpga_0_Ethernet_MAC_PHY_col_pin => fpga_0_Ethernet_MAC_PHY_col_pin,
      fpga_0_Ethernet_MAC_PHY_tx_data_pin => fpga_0_Ethernet_MAC_PHY_tx_data_pin,
      fpga_0_Ethernet_MAC_PHY_tx_en_pin => fpga_0_Ethernet_MAC_PHY_tx_en_pin,
      fpga_0_Ethernet_MAC_PHY_tx_clk_pin => fpga_0_Ethernet_MAC_PHY_tx_clk_pin,
      fpga_0_Ethernet_MAC_PHY_rx_er_pin => fpga_0_Ethernet_MAC_PHY_rx_er_pin,
      fpga_0_Ethernet_MAC_PHY_rx_clk_pin => fpga_0_Ethernet_MAC_PHY_rx_clk_pin,
      fpga_0_Ethernet_MAC_PHY_dv_pin => fpga_0_Ethernet_MAC_PHY_dv_pin,
      fpga_0_Ethernet_MAC_PHY_rx_data_pin => fpga_0_Ethernet_MAC_PHY_rx_data_pin,
      fpga_0_net_gnd_pin => fpga_0_net_gnd_pin,
      fpga_0_net_gnd_1_pin => fpga_0_net_gnd_1_pin,
      fpga_0_net_gnd_2_pin => fpga_0_net_gnd_2_pin,
      fpga_0_net_gnd_3_pin => fpga_0_net_gnd_3_pin,
      fpga_0_net_gnd_4_pin => fpga_0_net_gnd_4_pin,
      fpga_0_net_gnd_5_pin => fpga_0_net_gnd_5_pin,
      fpga_0_net_gnd_6_pin => fpga_0_net_gnd_6_pin,
      sys_clk_pin => sys_clk_pin,
      sys_rst_pin => sys_rst_pin
    );

end architecture STRUCTURE;

