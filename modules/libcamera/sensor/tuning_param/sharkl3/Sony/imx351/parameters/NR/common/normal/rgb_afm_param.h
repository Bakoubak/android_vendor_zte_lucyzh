/*versionid=0x00090007*/
/*maxGain=0.00*/
/*param0.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x01,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x00B9,0x0085/*0-1*/
		},
		/*iir_c*/
		{
			0x0000,0xFF1B,0x0200,0x0400,0x0200,0x0000,0xFFEC,0x0200,0x0400,0x0200/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x02,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xFE,0xFE,0xFE,0xFE,0x10,0xFE,0xFE,0xFE,0xFE/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0xFD,0x05,0x03,0x05,0x00,0xFB,0x03,0xFB,0xFD/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0x03,0x05,0xFD,0xFB,0x00,0x05,0xFD,0xFB,0x03/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xF8,0x00,0xF8,0x10,0x00,0x00,0x00,0x00/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x00,
				/*fv_shift*/
				0x00,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000064,
				/*fv_max_th*/
				0x0001FFFF,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x00,
				/*fv_shift*/
				0x00,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000064,
				/*fv_max_th*/
				0x0001FFFF,

			}
		}
	}
}
,
/*param1.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param2.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param3.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param4.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param5.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param6.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param7.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param8.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param9.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param10.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param11.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param12.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param13.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param14.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param15.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param16.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param17.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param18.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param19.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param20.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param21.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param22.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param23.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
/*param24.&BasePoint=1&*/
/*sharkl3_sensor_rgb_afm_level*/
{
	/*afm_iir_denoise*/
	{
		/*afm_iir_en*/
		0x00,
		/*reserved*/
		{
			0x00,0x00,0x00/*0-2*/
		},
		/*iir_g*/
		{
			0x07FF,0x0001/*0-1*/
		},
		/*iir_c*/
		{
			0x07FF,0x0000,0xF800,0x07FF,0xF800,0x0002,0xF800,0x07FF,0x0003,0x07FF/*0-9*/
		}
	},
	/*afm_enhanced*/
	{
		/*afm_enhanced_pre*/
		{
			/*channel_sel*/
			0x00,
			/*denoise_mode*/
			0x01,
			/*center_wgt*/
			0x02,
			/*reserved*/
			0x00,

		},
		/*afm_enhanced_process*/
		{
			/*fv1_coeff*/
			{
				/*fv1_coeff_0*/
				{
					0xF9,0x01,0xFD,0xFA,0x00,0x02,0x07,0x06,0x00/*0-8*/
				},
				/*fv1_coeff_1*/
				{
					0x06,0xFC,0xFF,0x0A,0x00,0xF5,0x00,0x00,0x00/*0-8*/
				},
				/*fv1_coeff_2*/
				{
					0xFF,0x0A,0x02,0x00,0xF6,0x01,0x03,0xFD,0xFE/*0-8*/
				},
				/*fv1_coeff_3*/
				{
					0x00,0xFE,0xFA,0xF8,0x01,0x02,0x0A,0x01,0x02/*0-8*/
				}
			},
			/*lum_stat_chn_sel*/
			0x03,
			/*reserved*/
			{
				0x00,0x00,0x00/*0-2*/
			}
		},
		/*afm_enhanced_post*/
		{
			/*enhanced_fv0*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000080,
				/*fv_max_th*/
				0x00080000,

			},
			/*enhanced_fv1*/
			{
				/*clip_en*/
				0x01,
				/*fv_shift*/
				0x04,
				/*reserved*/
				{
					0x00,0x00/*0-1*/
				},
				/*fv_min_th*/
				0x00000DDC,
				/*fv_max_th*/
				0x00014A1F,

			}
		}
	}
}
,
