#pragma once

#include <string>

// Lua UI we execute
std::string LuaUI = R"(
-- Gui to Lua
-- Version: 3.2

-- Instances:

local MobileBlox = Instance.new("ScreenGui")
local Main = Instance.new("Frame")
local TextBox = Instance.new("TextBox")
local Clear = Instance.new("TextButton")
local Execute = Instance.new("TextButton")
local ImageLabel = Instance.new("ImageLabel")
local TextLabel = Instance.new("TextLabel")

--Properties:

MobileBlox.Name = "MobileBlox"
MobileBlox.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")

Main.Name = "Main"
Main.Parent = MobileBlox
Main.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
Main.Position = UDim2.new(0.199891418, 235, 0.120539807, 570)
Main.Size = UDim2.new(0, 699, 0, 378)

TextBox.Parent = Main
TextBox.BackgroundColor3 = Color3.fromRGB(33, 33, 33)
TextBox.Position = UDim2.new(0.0197888371, 0, 0.111275166, 0)
TextBox.Size = UDim2.new(0, 671, 0, 263)
TextBox.ClearTextOnFocus = false
TextBox.Font = Enum.Font.Ubuntu
TextBox.MultiLine = true
TextBox.Text = ""
TextBox.TextColor3 = Color3.fromRGB(186, 186, 186)
TextBox.TextSize = 14.000
TextBox.TextXAlignment = Enum.TextXAlignment.Left
TextBox.TextYAlignment = Enum.TextYAlignment.Top

Clear.Name = "Clear"
Clear.Parent = Main
Clear.BackgroundColor3 = Color3.fromRGB(144, 0, 0)
Clear.Position = UDim2.new(0.680623889, 0, 0.838568151, 0)
Clear.Size = UDim2.new(0, 200, 0, 50)
Clear.Font = Enum.Font.SourceSans
Clear.Text = "Clear"
Clear.TextColor3 = Color3.fromRGB(0, 0, 0)
Clear.TextScaled = true
Clear.TextSize = 14.000
Clear.TextWrapped = true

Execute.Name = "Execute"
Execute.Parent = Main
Execute.BackgroundColor3 = Color3.fromRGB(63, 190, 93)
Execute.Position = UDim2.new(0.0365853794, 0, 0.838568151, 0)
Execute.Size = UDim2.new(0, 200, 0, 50)
Execute.Font = Enum.Font.SourceSans
Execute.Text = "Execute"
Execute.TextColor3 = Color3.fromRGB(0, 0, 0)
Execute.TextScaled = true
Execute.TextSize = 14.000
Execute.TextWrapped = true

ImageLabel.Parent = Main
ImageLabel.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
ImageLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
ImageLabel.BorderSizePixel = 0
ImageLabel.Position = UDim2.new(0.00715307565, 0, 0.0057603945, 0)
ImageLabel.Size = UDim2.new(0, 37, 0, 33)
ImageLabel.Image = "http://www.roblox.com/asset/?id=12683173481"
ImageLabel.ImageColor3 = Color3.fromRGB(252, 255, 255)

TextLabel.Parent = Main
TextLabel.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
TextLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
TextLabel.BorderSizePixel = 0
TextLabel.Position = UDim2.new(0.0901287571, 0, 0.00529100513, 0)
TextLabel.Size = UDim2.new(0, 139, 0, 34)
TextLabel.Font = Enum.Font.SourceSans
TextLabel.Text = "Frost X Neo Excecutor BY GunyahVR"
TextLabel.TextColor3 = Color3.fromRGB(0, 0, 0)
TextLabel.TextSize = 14.000

-- Scripts:

local function CTPCQDE_fake_script() -- Clear.LocalScript 
	local script = Instance.new('LocalScript', Clear)

	coroutine.wrap(NBUT_fake_script)()
	local function NBUT_fake_script() -- Clear.LocalScript
		local script = Instance.new('LocalScript', Clear)
	
		local box = script.Parent.Parent.TextBox
		local btn = script.Parent
	
		btn.MouseButton1Click:Connect(function()
			box.Text = "";
		end)
	end
	
	
end
coroutine.wrap(CTPCQDE_fake_script)()
local function XTCHMDI_fake_script() -- Execute.LocalScript 
	local script = Instance.new('LocalScript', Execute)

	coroutine.wrap(NBUT_fake_script)()
	local function OBDPHLQ_fake_script() -- Execute.LocalScript
		local script = Instance.new('LocalScript', Execute)
	
		local box = script.Parent.Parent.TextBox
		local btn = script.Parent
	
		btn.MouseButton1Click:Connect(function()
			loadstring(box.Text)()
		end)
	end
end
coroutine.wrap(XTCHMDI_fake_script)()
