#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void main() // Position - 0x0
{
	if (unk_0x55EEDBBFDC6E810F(2))
		func_1();

	if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
		unk_0x2718E9CC165A99F6(uScriptParam_0, 1);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (unk_0x7DE17ACDD8BA2642(uScriptParam_0))
		{
			if (unk_0x4B85D97500605AE9(uScriptParam_0) && unk_0x24B651D85CCE5EB4(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x28B891F3A70F9A2A(uScriptParam_0))
						{
							unk_0x28818732C8F0F80E("MISSMIC2");
						
							if (unk_0x2BBF749E555360DC("MISSMIC2"))
							{
								unk_0xB07A1B0E812C8E61(uScriptParam_0, "beefsplitter_loop", "MISSMIC2", 1f, 1, 0, 0, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
				
					case 1:
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}

	return;
}

void func_1() // Position - 0xAF
{
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\\n");
	unk_0x0B34FA69ECCE3927("MISSMIC2");
	unk_0x675D9C12C73D3DE7();
	return;
}

void func_2(char* sParam0) // Position - 0xC8
{
	func_3(sParam0);
	return;
}

void func_3(char* sParam0) // Position - 0xD6
{
	unk_0x4310A0DB886F9FED(sParam0, sParam0);
	return;
}

