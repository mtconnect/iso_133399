#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_characteristicType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_characteristicType



namespace cutting_tool_schema_arm
{

class CAssociated_characteristicType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_characteristicType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_characteristicType(CAssociated_characteristicType const& init);
	void operator=(CAssociated_characteristicType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_characteristicType); }
	MemberElement<CCutting_condition, _altova_mi_altova_CAssociated_characteristicType_altova_Cutting_condition> Cutting_condition;
	struct Cutting_condition { typedef Iterator<CCutting_condition> iterator; };
	MemberElement<CCoupling, _altova_mi_altova_CAssociated_characteristicType_altova_Coupling> Coupling;
	struct Coupling { typedef Iterator<CCoupling> iterator; };
	MemberElement<CWorkpiece_feature, _altova_mi_altova_CAssociated_characteristicType_altova_Workpiece_feature> Workpiece_feature;
	struct Workpiece_feature { typedef Iterator<CWorkpiece_feature> iterator; };
	MemberElement<CMaterial_designation, _altova_mi_altova_CAssociated_characteristicType_altova_Material_designation> Material_designation;
	struct Material_designation { typedef Iterator<CMaterial_designation> iterator; };
	MemberElement<CCutting_data_association, _altova_mi_altova_CAssociated_characteristicType_altova_Cutting_data_association> Cutting_data_association;
	struct Cutting_data_association { typedef Iterator<CCutting_data_association> iterator; };
	MemberElement<CGrade, _altova_mi_altova_CAssociated_characteristicType_altova_Grade> Grade;
	struct Grade { typedef Iterator<CGrade> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_characteristicType
