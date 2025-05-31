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
local PingFrame = Instance.new("Frame")
local UICorner = Instance.new("UICorner")
local TextLabel_2 = Instance.new("TextLabel")
local UICorner_2 = Instance.new("UICorner")
local UITextSizeConstraint = Instance.new("UITextSizeConstraint")
local fpsFrame = Instance.new("Frame")
local UICorner_3 = Instance.new("UICorner")
local TextLabel_3 = Instance.new("TextLabel")
local UICorner_4 = Instance.new("UICorner")
local UITextSizeConstraint_2 = Instance.new("UITextSizeConstraint")

--Properties:

MobileBlox.Name = "MobileBlox"
MobileBlox.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")

Main.Name = "Main"
Main.Parent = MobileBlox
Main.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
Main.Position = UDim2.new(0.464226246, 235, -0.51971519, 570)
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

PingFrame.Name = "PingFrame"
PingFrame.Parent = MobileBlox
PingFrame.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
PingFrame.BorderColor3 = Color3.fromRGB(27, 42, 53)
PingFrame.Position = UDim2.new(0.899423301, 0, 0.343485624, 0)
PingFrame.Size = UDim2.new(0.100426771, 0, 0.0528813563, 0)

UICorner.Parent = PingFrame

TextLabel_2.Parent = PingFrame
TextLabel_2.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
TextLabel_2.BorderColor3 = Color3.fromRGB(50, 50, 50)
TextLabel_2.Position = UDim2.new(0.0508939698, 0, 0.149884582, 0)
TextLabel_2.Size = UDim2.new(0.897063017, 0, 0.61705935, 0)
TextLabel_2.Font = Enum.Font.Gotham
TextLabel_2.Text = "100 ms"
TextLabel_2.TextColor3 = Color3.fromRGB(0, 255, 0)
TextLabel_2.TextScaled = true
TextLabel_2.TextSize = 14.000
TextLabel_2.TextStrokeColor3 = Color3.fromRGB(0, 255, 0)
TextLabel_2.TextStrokeTransparency = 0.830
TextLabel_2.TextWrapped = true

UICorner_2.Parent = TextLabel_2

UITextSizeConstraint.Parent = TextLabel_2
UITextSizeConstraint.MaxTextSize = 14

fpsFrame.Name = "fpsFrame"
fpsFrame.Parent = MobileBlox
fpsFrame.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
fpsFrame.Position = UDim2.new(0.803909719, 0, 0.343485624, 0)
fpsFrame.Size = UDim2.new(0.100426771, 0, 0.0528813563, 0)

UICorner_3.Parent = fpsFrame

TextLabel_3.Parent = fpsFrame
TextLabel_3.BackgroundColor3 = Color3.fromRGB(50, 50, 50)
TextLabel_3.BorderColor3 = Color3.fromRGB(27, 42, 53)
TextLabel_3.Position = UDim2.new(0.0508939698, 0, 0.184329495, 0)
TextLabel_3.Size = UDim2.new(0.897063017, 0, 0.61705935, 0)
TextLabel_3.Font = Enum.Font.Gotham
TextLabel_3.Text = "100 fps"
TextLabel_3.TextColor3 = Color3.fromRGB(0, 255, 0)
TextLabel_3.TextScaled = true
TextLabel_3.TextSize = 14.000
TextLabel_3.TextStrokeColor3 = Color3.fromRGB(0, 255, 0)
TextLabel_3.TextStrokeTransparency = 0.830
TextLabel_3.TextWrapped = true

UICorner_4.Parent = TextLabel_3

UITextSizeConstraint_2.Parent = TextLabel_3
UITextSizeConstraint_2.MaxTextSize = 14

-- Scripts:

local function HNUQ_fake_script() -- Clear.LocalScript 
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
coroutine.wrap(HNUQ_fake_script)()
local function DHQMVUD_fake_script() -- Execute.LocalScript 
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
coroutine.wrap(DHQMVUD_fake_script)()
local function STBH_fake_script() -- TextLabel_2.Server_Main 
	local script = Instance.new('Script', TextLabel_2)

	script.Parent.A.OnServerInvoke=(function()
	return nil
	end)
end
coroutine.wrap(STBH_fake_script)()
local function HCQUTW_fake_script() -- TextLabel_2.Client_Main 
	local script = Instance.new('LocalScript', TextLabel_2)

	while true do wait(0.4)
	local thistime=tonumber(tick())
	script.Parent.A:InvokeServer()
	script.Parent.Text=string.format(tostring(math.floor((tick()-thistime)*1150)).." ms.")
	end
end
coroutine.wrap(HCQUTW_fake_script)()
local function AVQCXTA_fake_script() -- TextLabel_3.Fps 
	local script = Instance.new('LocalScript', TextLabel_3)

	local t = tick()
	
	local count = 0
	
	local fps = 60
	
	game:GetService("RunService").RenderStepped:Connect(function()
		count = count + 1
		if tick()-t >= 1 then
			fps = count
			count = 0
			t = tick()
			if fps >= 50 then
				script.Parent.TextColor3 = Color3.fromRGB(0, 255, 0)
			end
			if fps < 50 then
				script.Parent.TextColor3 = Color3.fromRGB(255, 173, 51)
			end
			if fps < 30 then
				script.Parent.TextColor3 = Color3.fromRGB(255, 0, 0)
			end
			script.Parent.Text = "FPS: "..fps
		end
	end)
end
coroutine.wrap(AVQCXTA_fake_script)()
