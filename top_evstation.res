<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE ResourceType SYSTEM "http://www.holobloc.com/xml/LibraryElement.dtd" >
<ResourceType Name="top_evstation" Comment="" >
<Identification Standard="61499-2" />
<VersionInfo Organization="UOA" Version="0.1" Author="hpea485" Date="2018-00-07" />
<CompilerInfo header="" classdef="">
</CompilerInfo>

<FBNetwork>
  <FB Name="inputs" Type="sifb_bfb_inputs" x="1837.5" y="437.5" />
  <FB Name="Reference1" Type="print" x="4987.5" y="218.75" />
  <FB Name="battery" Type="bfb_ess_battery" x="3806.25" y="218.75" />
  <FB Name="controller" Type="cfb_controller" x="2581.25" y="218.75" />
  <FB Name="Reference" Type="bfb_text_print" x="6037.5" y="262.5" />
  <EventConnections><Connection Source="inputs.Tick" Destination="controller.Tick" />
<Connection Source="inputs.Tick" Destination="Reference.tick_stop" />
<Connection Source="Reference1.Done" Destination="Reference.Tick_array" />
<Connection Source="battery.SoC_change" Destination="Reference1.Last_Tick" />
<Connection Source="battery.SoC_change" Destination="Reference.Tick_SoC" />
<Connection Source="battery.Discharge_out" Destination="Reference1.Discharging" />
<Connection Source="battery.Charge_out" Destination="Reference1.Charging" />
<Connection Source="battery.Do_nothing_out" Destination="Reference1.Do_nothing" />
<Connection Source="controller.Charging" Destination="battery.Charge" />
<Connection Source="controller.Discharging" Destination="battery.Discharge" />
<Connection Source="controller.Do_nothing" Destination="battery.Do_nothing" />
<Connection Source="controller.Tick_time" Destination="battery.Tick_ESS" />
<Connection Source="Reference.Done" Destination="inputs.Start" /></EventConnections>
  <DataConnections><Connection Source="inputs.Minute" Destination="controller.Minute" />
<Connection Source="inputs.Minute" Destination="Reference1.Minute" />
<Connection Source="inputs.Price" Destination="controller.Price" />
<Connection Source="inputs.Price" Destination="Reference1.Price" />
<Connection Source="inputs.Demand_kWh" Destination="controller.Demand_kWh" />
<Connection Source="inputs.Day" Destination="controller.day" />
<Connection Source="inputs.Day" Destination="Reference.Day" />
<Connection Source="inputs.Lenght" Destination="Reference.lenght" />
<Connection Source="inputs.stop" Destination="Reference.Stop" />
<Connection Source="inputs.Sma" Destination="controller.Sma" />
<Connection Source="inputs.Sma" Destination="Reference.SMA" />
<Connection Source="inputs.Std_dev" Destination="controller.Std_dev" />
<Connection Source="inputs.Std_dev" Destination="Reference.Std_dev" />
<Connection Source="Reference1.min" Destination="Reference.Min" />
<Connection Source="Reference1.Demand" Destination="Reference.Demand" />
<Connection Source="Reference1.Pgrid" Destination="Reference.Pgrid" />
<Connection Source="Reference1.Pbc" Destination="Reference.Pbc" />
<Connection Source="Reference1.Pbd" Destination="Reference.Pbd" />
<Connection Source="Reference1.Price_min" Destination="Reference.Price" />
<Connection Source="battery.BatterySoC" Destination="controller.ESS_battery_SoC" />
<Connection Source="battery.BatterySoC" Destination="Reference.SoC" />
<Connection Source="battery.Demand" Destination="Reference1.Power_Demand" />
<Connection Source="controller.ESS_Charging_Power_Demand" Destination="battery.Charge_Power" />
<Connection Source="controller.ESS_Charging_Power_Demand" Destination="Reference1.ESS_Charging" />
<Connection Source="controller.ESS_Discharging_Power" Destination="battery.Discharge_Power" />
<Connection Source="controller.ESS_Discharging_Power" Destination="Reference1.ESS_Discharging_Power" />
<Connection Source="controller.SoC" Destination="battery.SoC_input" />
<Connection Source="controller.Demand" Destination="battery.Power_Demand" /></DataConnections>
</FBNetwork>
</ResourceType>